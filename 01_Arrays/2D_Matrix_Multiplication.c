#include <stdio.h>

void multiply(int a[][2], int b[][2], int result[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < 2; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void display(int arr[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[2][2] = {
        {1, 2},
        {3, 4}
    };

    int b[2][2] = {
        {5, 6},
        {7, 8}
    };

    int result[2][2];

    multiply(a, b, result);

    printf("Matrix A:\n");
    display(a);

    printf("\nMatrix B:\n");
    display(b);

    printf("\nA x B:\n");
    display(result);

    return 0;
}