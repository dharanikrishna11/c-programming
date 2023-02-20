#include <stdio.h>

int main()
{
    int matrix[10][10], i, j, n, sum = 0;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The diagonal elements of the matrix are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }

    printf("\nThe sum of the diagonal elements is: %d", sum);

    return 0;
}
