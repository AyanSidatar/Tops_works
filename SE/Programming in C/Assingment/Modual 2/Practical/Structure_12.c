#include<stdio.h>

struct student
{
    char name[50];
    int rollno;
    float marks;
};

int main()
{
    struct student s[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Details of Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display Student Details
    printf("\nStudent Details:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rollno);
        printf("Marks: %.2f\n", s[i].marks);
    }
}