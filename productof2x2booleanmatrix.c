//WAP in C to implement product of 2x2 boolean matrix.
#include <stdio.h>
int main()
{
    int matrix1[2][2], matrix2[2][2], product[2][2], i, j, k;
    printf("Enter elements of the first 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
	{
        for (j = 0; j < 2; j++)
		{
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of the second 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
	{
        for (j = 0; j < 2; j++)
		{
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
	{
        for (j = 0; j < 2; j++)
		{
            product[i][j] = 0;
            for (k = 0; k < 2; k++)
			{
                product[i][j] += matrix1[i][k] && matrix2[k][j];
            }
        }
    }
    printf("Product of the two matrices:\n");
    for (i = 0; i < 2; i++)
	{
        for (j = 0; j < 2; j++)
		{
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
