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

    char searchAuthor[20];
    printf("Enter Author name to search: ");
    scanf(" %s", &searchAuthor);

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(searchAuthor, b1[i].author) == 0)
        {
            printf("\n\n.....Book Details %d......", i + 1);
            printf("\nBook Title: %s", b1[i].title);
            // printf("\nBook Author: %s", b1[i].author);
            // printf("\nBook Price: %d", b1[i].price);
        }
    }
}