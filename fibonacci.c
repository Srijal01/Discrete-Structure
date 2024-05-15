//WAP to find fibonacci series using recursion.
#include <stdio.h>
int fibonacci(int n) 
{
    if (n <= 1) 
	{
        return n;
    } 
	else 
	{
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}
int main() 
{
    int num, i;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num);
    if (num < 0) 
	{
        printf("Invalid input. Please enter a non-negative integer.\n");
    } 
	else 
	{
        printf("Fibonacci series up to %d terms:\n", num);
        for (i = 0; i < num; i++) 
		{
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }
    return 0;
}
