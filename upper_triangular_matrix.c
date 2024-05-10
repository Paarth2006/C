#include<stdio.h>
const int m=3;
const int n=3;
int upper(int a[100][100], int m, int n);

int main() {
    int i,j,a[m][n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the [%d][%d] element of the matrix: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("The upper triangular matrix is:\n");
    upper(a,m,n);
    return 0;
}

int upper(int a[100][100], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (j >= i)
            {
                printf("%d ", a[i][j]);
            } 
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}