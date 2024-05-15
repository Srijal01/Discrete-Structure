//Write a simple program that takes user input to choose the type of arithmetic operation and two numbers and then printout the result.
#include<stdio.h>
int main()
{
	int choice;
	float a, b, c;
	printf("Choose the arithmetic operations:\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	scanf("%d",&choice);
	printf("Enter the first number: ");
	scanf("%f",&a);
	printf("Enter the second number: ");
	scanf("%f",&b);
	switch(choice)
	{
		case 1:
			c = a + b;
			printf("The sum is: %.2f\n",c);
			break;
		case 2:
			c = a - b;
			printf("The difference is: %.2f\n",c);
			break;
		case 3:
			c = a * b;
			printf("The product is: %.2f\n",c);
			break;
		case 4:
			if(b != 0)
			{
				c = a / b;
				printf("The quotient is: %.2f\n",c);
				break;
			}
			else
			{
				printf("ERROR: Division by zero is not allowed.\n");
			}
			break;
		default:
			printf("Invalid choice.\n");
	}
	return 0;
}
