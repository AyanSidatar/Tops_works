// #include <stdio.h>
// void palindrome(int num)
// {
//     int temp, rem, rev = 0;

//     temp = num;

//     while (num != 0)
//     {
//         rem = num % 10;
//         rev = rev * 10 + rem;
//         num = num / 10;
//     }

//     if (temp == rev)
//         printf("%d is a Palindrome Number.", temp);
//     else
//          printf("%d is Not a Palindrome Number.", temp);
// }

// int main()
// {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     palindrome(num);
       
// }


//challange string check palindrome or not


#include <stdio.h>
#include <string.h>

void palindrome(char str[])
{
    int i;
    int len = strlen(str);

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            printf("'%s' is Not a Palindrome String.", str);
            return;
        }
    }

    printf("'%s' is Palindrome String.", str);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    palindrome(str);

    return 0;
}