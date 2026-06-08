#include <stdio.h>
struct Book
{
    char title[20];
    char author[20];
    int price;

} b1;

int main()
{
    struct Book b1[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter book title: ");
        scanf(" %s", &b1[i].title);
        // fgets(b1[i].title,sizeof(b1[i].title),stdin);
        printf("Enter book author: ");
        // fgets(b1[i].title,sizeof(b1[i].author),stdin);
        scanf(" %s", &b1[i].author);
        printf("Enter book price: ");
        scanf("%d", &b1[i].price);
    }
    int i = 0;
    FILE *fp;
    fp = fopen("Data.txt", "a");

    for (i = 0; i < 2; i++)
    {
        fprintf(fp, "\n\n.....Book Details %d......", i + 1);
        fprintf(fp, "\nBook Title: %s", b1[i].title);
        fprintf(fp, "\nBook Author: %s", b1[i].author);
        fprintf(fp, "\nBook Price: %d", b1[i].price);
        // printf("\n\n.....Book Details %d......",i+1);
        // printf("\nBook Title: %s",b1[i].title);
        // printf("\nBook Author: %s",b1[i].author);
        // printf("\nBook Price: %d",b1[i].price);
    }
    fclose(fp);
}