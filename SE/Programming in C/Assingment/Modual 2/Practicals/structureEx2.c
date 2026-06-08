#include <stdio.h>

struct student
{
    char name[20], email[20];
    int age;
} s1;
int main()
{
    struct student s1[5];
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("Enter Student Name- ");
        fgets(s1[i].name, sizeof(s1[i].name), stdin);
        printf("Enter Student Age- ");
        scanf("%d", &s1[i].age);
        getchar();
        printf("Enter Student Email- ");
        fgets(s1[i].email, sizeof(s1[i].email), stdin);
    }

    for (i = 0; i < 2; i++)
    {
        printf("\n\nStudent Details- %s ", s1[i].name);
        printf("\n\nStudent Details- %d ", s1[i].age);
        printf("\n\nStudent Details- %s ", s1[i].email);
    }
}