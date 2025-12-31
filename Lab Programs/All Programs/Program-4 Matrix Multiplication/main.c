#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2; // r1 -> row1, r2 -> row2, c1 -> column1, c2 -> column2
    int i, j, k;

    // Input dimensions
    printf("Enter num of rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Check multiplication condition
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    // Take Input for Matrix A
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Take Input for Matrix B
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix with 0
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < r1; i++) // i → row of Matrix A and Matrix C
    {
        for (j = 0; j < c2; j++) // j → column of Matrix B and Matrix C
        {
            for (k = 0; k < c1; k++) // k → matching column of A and row of B
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    // Display result
    printf("Resultant Matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
