#include <stdio.h>
int main(){
    int matrixA[3][3], matrixB[3][3], matrix_result[3][3], subtracted_matrix[3][3];
    printf("Enter elements of Matrix A (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Enter elements of Matrix B (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix_result[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                matrix_result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    printf("Resultant Matrix (R = A x B):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix_result[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            subtracted_matrix[i][j] = matrixA[i][j] - matrix_result[i][j];
        }
    }
    printf("Subtracted Matrix (S = A - R):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", subtracted_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
