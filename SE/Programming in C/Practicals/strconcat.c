#include <stdio.h>
#include <string.h>
int main()
{
    char fname[100], lname[100];

    printf("Enter your first name: ");
    // scanf("%s", fname);
    fgets(fname, sizeof(fname), stdin);

    printf("Enter your last name: ");
    // scanf("%s", lname);
    fgets(lname, sizeof(lname), stdin);

    strcat(fname, lname);
    printf("Full name: %s", fname);
}