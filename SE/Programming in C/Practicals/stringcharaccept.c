#include <stdio.h>
int main()
{
	char name[20];
	printf("Enter Your Name: ");
	scanf("%s", name);
	char search;
	printf("Enter Character to Search: ");
	scanf(" %c", &search);
	int check = 0, i;
	for (i = 0; name[i] != '\0'; i++)
	{
		if (name[i] == search)
		{
			check = 1;
			break;
		}
	}
	if (check == 1)
	{
		printf("\n %c Character Found At Index: %d", search, i);
	}
	else
	{
		printf("\n%c Character Not Found", search);
	}
}