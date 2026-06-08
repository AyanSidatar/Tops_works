#include <stdio.h>

struct book
{
    char title[20], author[20];
    int price;
} b1;

int main()
{
    struct book b1;
    int i;

    for (i = 1; i <= 2; i++)
    {
        printf("Enter Book Name- ");
        fgets(b1.title, sizeof(b1.title), stdin);
        printf("Enter Book Author- ");
        fgets(b1.author, sizeof(b1.author), stdin);
        printf("Enter Book Price- ");
        scanf("%d", &b1.price);
    }
    for (i = 0; i < 2; i++)
    {
        printf("\n\nBook Details- %s ", b1.title);
        printf("\n\nBook Details- %s ", b1.author);
        printf("\n\nBook Details- %d ", b1.price);
    }
}