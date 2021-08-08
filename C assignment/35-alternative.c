/* WAP to read a matrix of order m*n from user. Pass this matrix to function
 * and multiply each element of the matrix by 3 */

#include <stdio.h>
#include <stdlib.h>

void mulMatrixBy3(int **matrixPtr, int noRow, int noCol);

int main() {
	int i, j;
	int noRow, noCol, **matrixPtr;

	/* Ask for number of rows and columns of the matrix */
	printf("Enter the number of rows and columns you want to enter: ");
	scanf("%d %d", &noRow, &noCol);

	/* Allocate memory for original matrix pointer */
	matrixPtr = malloc(noRow * sizeof(int *));
	for (i = 0; i < noRow; i++) {
		matrixPtr[i] = malloc(noCol * sizeof(int));
	}

	/* Ask the values for original matrix */
	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			printf("Enter the element for row #%d - column #%d: ", i+1, j+1);
			scanf("%d", &matrixPtr[i][j]);
		}
	}

	/* Print original matrix */
	puts("");
	puts("Original matrix:");
	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			printf("%d\t", matrixPtr[i][j]);
		}
		puts("");
	}

	/* Multiply each values of the matrix by 3 */
	mulMatrixBy3(matrixPtr, noRow, noCol);

	/* Print multiplied matrix */
	puts("Matrix after multiplying by 3:");
	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			printf("%d\t", matrixPtr[i][j]);
		}
		puts("");
	}

	/* Free memory for matrix pointer */
	for (i = 0; i < noRow; i++) {
		free(matrixPtr[i]);
	}
	free(matrixPtr);

	return 0;
}

void mulMatrixBy3(int **matrixPtr, int noRow, int noCol) {
	int i, j;

	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			matrixPtr[i][j] *= 3;
		}
	}
}
