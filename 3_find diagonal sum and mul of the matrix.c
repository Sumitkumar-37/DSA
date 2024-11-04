// 3. WAP in C to find diagonal sum of the matrix(5x5 / 3x3).
#include<stdio.h> 
int main()
{
    int n, sum = 0;
    int mul=1;
    printf("Enter size of matrix (3 or 5): ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i]; // Main diagonal
        mul *= matrix[i][i];
    }
    printf("Diagonal sum =%d\nMul %d\n", sum,mul);
    return 0;
}

