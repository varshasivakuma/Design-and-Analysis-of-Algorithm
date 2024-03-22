#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int triangle[n][n]; 
    for (int i = 0; i < n; i++) {
        triangle[i][0] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }
    printf("Pascal's triangle:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}

