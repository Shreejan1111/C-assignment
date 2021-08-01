/* WAP to read order of matrix and its elements. Find transpose matrix of the
 * matrix */

/* One may prefer 36-alternative.c */

#include <stdio.h>
#include <stdlib.h>

int **createMatrix(int noRow, int noCol);
void inputMatrix(int **matrixPtr, int noRow, int noCol);
void transMatrix(int **matrixOrigPtr, int **matrixTransPtr, int noOrigRow, int noOrigCol);
void printMatrix(int **matrixPtr, int noRow, int noCol);
void freeMatrixMem(int **matrixPtr, int noRow);

int main() {
	int i, j;
	int noRow, noCol, **matrixOrigPtr, **matrixTransPtr;

	printf("Enter the number of rows and columns you want to enter: ");
	scanf("%d %d", &noRow, &noCol);

	matrixOrigPtr = createMatrix(noRow, noCol);
	matrixTransPtr = createMatrix(noCol, noRow);

	inputMatrix(matrixOrigPtr, noRow, noCol);

	transMatrix(matrixOrigPtr, matrixTransPtr, noRow, noCol);

	puts("");
	puts("Original matrix:");
	printMatrix(matrixOrigPtr, noRow, noCol);

	puts("Transpose matrix:");
	printMatrix(matrixTransPtr, noCol, noRow);

	freeMatrixMem(matrixOrigPtr, noRow);
	freeMatrixMem(matrixTransPtr, noRow);

	return 0;
}

int **createMatrix(int noRow, int noCol) {
	int i, **matrixPtr;

	matrixPtr = malloc(noRow * sizeof(int *));

	for (i = 0; i < noRow; i++) {
		matrixPtr[i] = malloc(noCol * sizeof(int));
	}

	return matrixPtr;
}

void inputMatrix(int **matrixPtr, int noRow, int noCol) {
	int i, j;

	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			printf("Enter the element for row #%d - column #%d: ", i+1, j+1);
			scanf("%d", &matrixPtr[i][j]);
		}
	}
}

void transMatrix(int **matrixOrigPtr, int **matrixTransPtr, int noOrigRow, int noOrigCol) {
	int i, j;

	for (i = 0; i < noOrigRow; i++) {
		for (j = 0; j < noOrigCol; j++) {
			matrixTransPtr[j][i] = matrixOrigPtr[i][j];
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
