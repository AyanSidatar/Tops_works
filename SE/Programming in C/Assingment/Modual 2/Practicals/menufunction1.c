#include <stdio.h>

int addition(int a, int b)
{
	int sum;
	return sum = a + b;
}

int substraction(int a, int b)
{
	int sub;
	return sub = a - b;
}

int multiplication(int a, int b)
{
	int mul;
	return mul = a * b;
}

int division(int a, int b)
{
	int div;
	return div = a / b;
}

int main()
{
	int i = 1, choice, n1, n2;

	while (1)
	{
		printf("\n 1. Addition \n 2. Substraction \n 3. Multiplication \n 4. Division \n 5. Exit \n\n\n\n");
		printf("Enter Your choice -");
		scanf("%d", &choice);

		if (choice == 5)
		{
			printf("Byeeee!!!");
			break;
		}
		printf("Enter 2 Number for Task -");
		scanf("%d %d", &n1, &n2);

		switch (choice)
		{
		case 1:
			printf("Addition is - %d", addition(n1, n2));
			break;
		case 2:
			printf("Substraction is - %d", substraction(n1, n2));
			break;
		case 3:
			printf("Multiplication is - %d", multiplication(n1, n2));
			break;
		case 4:
			printf("Division is - %d", division(n1, n2));
			break;
		default:
			printf("Enter Valied Choice");
			break;
		}
	}
}
