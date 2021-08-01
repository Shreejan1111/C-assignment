/* WAP to ask two m*n matrixes and display both the sum and difference of two
 * matrices */

#include <stdio.h>
#include <stdlib.h>

int **createMatrix(int noRow, int noCol);
void inputMatrix(int **matrixPtr, int noRow, int noCol);
void matrixSum(int **matrixSumPtr, int **matrix1Ptr, int **matrix2Ptr, int noRow, int noCol);
void matrixDiff(int **matrixSumPtr, int **matrix1Ptr, int **matrix2Ptr, int noRow, int noCol);
void printMatrix(int **matrixPtr, int noRow, int noCol);
void freeMatrixMem(int **matrixPtr, int noRow);

int main() {
	int i, j;
	int noRow, noCol, **matrix1Ptr, **matrix2Ptr, **matrixSumPtr, **matrixDiffPtr;

	printf("Enter the number of rows and columns you want to enter: ");
	scanf("%d %d", &noRow, &noCol);

	matrix1Ptr = createMatrix(noRow, noCol);
	matrix2Ptr = createMatrix(noRow, noCol);
	matrixSumPtr = createMatrix(noRow, noCol);
	matrixDiffPtr = createMatrix(noRow, noCol);

	puts("For 1st matrix:");
	inputMatrix(matrix1Ptr, noRow, noCol);
	puts("For 2nd matrix:");
	inputMatrix(matrix2Ptr, noRow, noCol);

	matrixSum(matrixSumPtr, matrix1Ptr, matrix2Ptr, noRow, noCol);
	matrixDiff(matrixDiffPtr, matrix1Ptr, matrix2Ptr, noRow, noCol);

	puts("");
	puts("Matrix 1:");
	printMatrix(matrix1Ptr, noRow, noCol);
	puts("Matrix 2:");
	printMatrix(matrix2Ptr, noRow, noCol);
	puts("Sum Matrix:");
	printMatrix(matrixSumPtr, noRow, noCol);
	puts("Diff Matrix:");
	printMatrix(matrixDiffPtr, noRow, noCol);

	freeMatrixMem(matrix1Ptr, noRow);
	freeMatrixMem(matrix2Ptr, noRow);
	freeMatrixMem(matrixSumPtr, noRow);
	freeMatrixMem(matrixDiffPtr, noRow);

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

void matrixSum(int **matrixSumPtr, int **matrix1Ptr, int **matrix2Ptr, int noRow, int noCol) {
	int i, j;

	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			matrixSumPtr[i][j] = matrix1Ptr[i][j] + matrix2Ptr[i][j];
		}
	}
}

void matrixDiff(int **matrixSumPtr, int **matrix1Ptr, int **matrix2Ptr, int noRow, int noCol) {
	int i, j;

	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			matrixSumPtr[i][j] = matrix1Ptr[i][j] - matrix2Ptr[i][j];
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
