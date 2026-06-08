#include <stdio.h>

int isEven(int n)
{
	if (n % 2 == 0)
	{
		printf("\nNumber %d is Even", n);
	}
	else
	{
		printf("\nNot Even Number");
	}
}

int factorial(int n)
{
	int fect = 1, i;
	for (i = 1; i <= n; i++)
	{
		fect = fect * i;
	}
	return fect;
}

int sumOfN(int n)
{
	int sum = 0, i;
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	return sum;
}

int table(int n)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("\n%d * %d = %d", n, i, n * i);
	}
}

int main()
{
	int i, n, choice, tn, fect = 1, sum = 0;

	while (1)
	{
		printf("\n\n1. EvenNumberChack \n2. Factorial \n3. SumOf_N_Number \n4. Table \n5. Exit \n\n\n");
		printf("Enter Your Choice - ");
		scanf("%d", &choice);

		if (choice > 0 && choice < 5)
		{
			printf("Enter Value To Perform Task - ");
			scanf("%d", &tn);

			switch (choice)
			{
			case 1:
			{
				isEven(tn);
				break;
			}
			case 2:
			{
				printf("\nFectorial of %d is %d", tn, factorial(tn));
				break;
			}
			case 3:
			{
				printf("\nSums of %d is %d", tn, sumOfN(tn));
				break;
			}
			case 4:
			{
				table(tn);
				break;
			}
			default:
			{

				printf("Enter valied Choice");
				break;
			}
			}
		}
		else
		{
			printf("Byeee!!!");
			break;
		}
	}
}
