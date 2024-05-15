//WAP to implement AND, OR and XOR gates.
#include <stdio.h>
int main() 
{
    int i, j;
    printf("Truth Table for AND, OR, and XOR Operations:\n");
    printf("i\tj\tAND\tOR\tXOR\n");

    for (i = 0; i <= 1; i++) 
	{
        for (j = 0; j <= 1; j++) 
		{
            int andResult = i && j;
            int orResult = i || j;
            int xorResult = i ^ j;

            printf("%d\t%d\t%d\t%d\t%d\n", i, j, andResult, orResult, xorResult);
        }
    }
    return 0;
}

