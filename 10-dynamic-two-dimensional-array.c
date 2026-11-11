#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int rows, cols;
    printf("Rows and columns: ");
    if (scanf("%d%d", &rows, &cols) != 2 || rows < 1 || cols < 1 || rows > 100 || cols > 100) return 1;
    int *matrix = malloc((size_t)rows * cols * sizeof *matrix);
    if (!matrix) return 1;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d]: ", i, j);
            if (scanf("%d", &matrix[i * cols + j]) != 1) { free(matrix); return 1; }
        }
    puts("Matrix:");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) printf("%4d", matrix[i * cols + j]);
        putchar('\n');
    }
    free(matrix);
    return 0;
}
