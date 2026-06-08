#include <stdio.h>
#include <string.h>

int main()
{
    char fname[50], lname[50];
    printf("Enter first name: ");
    fgets(fname, sizeof(fname), stdin);
    printf("Enter last name: ");
    fgets(lname, sizeof(lname), stdin);

    strrev(fname);
    printf("Reversed first name: %s", fname);
}