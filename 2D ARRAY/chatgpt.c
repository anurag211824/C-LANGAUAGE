#include <stdio.h>

void generateSpiralMatrix(int n) {
    int matrix[n][n];
    int num = 1;
    int startRow = 0, endRow = n - 1;
    int startCol = 0, endCol = n - 1;

    while (num <= n * n) {
        // Fill the top row
        for (int col = startCol; col <= endCol; col++) {
            matrix[startRow][col] = num++;
        }
        startRow++;

        // Fill the rightmost column
        for (int row = startRow; row <= endRow; row++) {
            matrix[row][endCol] = num++;
        }
        endCol--;

        // Fill the bottom row
        for (int col = endCol; col >= startCol; col--) {
            matrix[endRow][col] = num++;
        }
        endRow--;

        // Fill the leftmost column
        for (int row = endRow; row >= startRow; row--) {
            matrix[row][startCol] = num++;
        }
        startCol++;
    }

    // Print the generated matrix
    printf("Generated Spiral Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    generateSpiralMatrix(n);

    return 0;
}
