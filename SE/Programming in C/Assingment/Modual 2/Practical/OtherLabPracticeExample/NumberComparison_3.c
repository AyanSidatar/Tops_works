//Using Switch Statement

#include <stdio.h>

int main()
{
    int a, b, c;
    int choice;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("1. Large Number\n");
    printf("2. Small Number\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            if (a >= b && a >= c){
                printf("Largest Number = %d", a);
            }
            else if (b >= a && b >= c){
                printf("Largest Number = %d", b);
            }
            else{
                printf("Largest Number = %d", c);
            }
            break;

        case 2:
            if (a <= b && a <= c){
                printf("Smallest Number = %d", a);
            }
            else if (b <= a && b <= c){
                printf("Smallest Number = %d", b);
            }
            else{
                printf("Smallest Number = %d", c);
            }
            break;

        default:
            printf("Invalid Choice");
    }
}


//Using Else If Statement


// #include <stdio.h>
// int main()
// {
//     int a, b, c, large, small;

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     // Largest Number
//     if (a >= b && a >= c){
//         large = a;
//     }
//     else if (b >= a && b >= c){
//         large = b;
//     }
//     else{
//         large = c;
//     }
//     // Smallest Number
//     if (a <= b && a <= c){
//         small = a;
//     }
//     else if (b <= a && b <= c){
//         small = b;
//     }
//     else{
//         small = c;
//     }
//     printf("Largest Number = %d\n", large);
//     printf("Smallest Number = %d\n", small);
// }