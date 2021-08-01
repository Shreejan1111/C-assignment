/* WAP to read a matrix of order m*n from user. Pass this matrix to function
 * and multiply each element of the matrix by 3 */

/* One may prefer 35-alternative.c */

#include <stdio.h>
#include <stdlib.h>

int **createFillMatrix(int noRow, int noCol);
void mulMatrixBy3(int **matrixPtr, int noRow, int noCol);
void printMatrix(int **matrixPtr, int noRow, int noCol);
void freeMatrixMem(int **matrixPtr, int noRow);

int main() {
	int i, j;
	int noRow, noCol, **matrixPtr;

	printf("Enter the number of rows and columns you want to enter: ");
	scanf("%d %d", &noRow, &noCol);

	matrixPtr = createFillMatrix(noRow, noCol);

	puts("");
	puts("Original matrix:");
	printMatrix(matrixPtr, noRow, noCol);

	mulMatrixBy3(matrixPtr, noRow, noCol);

	puts("Matrix after multiplying by 3:");
	printMatrix(matrixPtr, noRow, noCol);

	freeMatrixMem(matrixPtr, noRow);

	return 0;
}

int **createFillMatrix(int noRow, int noCol) {
	int i, j, **matrixPtr;

	matrixPtr = malloc(noRow * sizeof(int *));
	for (i = 0; i < noRow; i++) {
		matrixPtr[i] = malloc(noCol * sizeof(int));
	}

	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			printf("Enter the element for row #%d - column #%d: ", i+1, j+1);
			scanf("%d", &matrixPtr[i][j]);
		}
	}

	return matrixPtr;
}

void mulMatrixBy3(int **matrixPtr, int noRow, int noCol) {
	int i, j;

	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			matrixPtr[i][j] *= 3;
		}
	}
}

void printMatrix(int **matrixPtr, int noRow, int noCol) {
	int i, j;

	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			printf("%d\t", matrixPtr[i][j]);
		}
		puts("");
	}
}

void freeMatrixMem(int **matrixPtr, int noRow) {
	int i;

	for (i = 0; i < noRow; i++) {
		free(matrixPtr[i]);
	}
	free(matrixPtr);
}
