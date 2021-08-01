/* WAP to read order of matrix and its elements. Find transpose matrix of the
 * matrix */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
	int noRow, noCol, **matrixOrigPtr, **matrixTransPtr;

	/* Ask for number of rows and columns of the matrix */
	printf("Enter the number of rows and columns you want to enter: ");
	scanf("%d %d", &noRow, &noCol);

	/* Allocate memory for original matrix pointer */
	matrixOrigPtr = malloc(noRow * sizeof(int *));
	for (i = 0; i < noRow; i++) {
		matrixOrigPtr[i] = malloc(noCol * sizeof(int));
	}

	/* Allocate memory for transponse matrix pointer */
	matrixTransPtr = malloc(noCol * sizeof(int *));
	for (i = 0; i < noCol; i++) {
		matrixTransPtr[i] = malloc(noRow * sizeof(int));
	}

	/* Ask the values for original matrix */
	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			printf("Enter the element for row #%d - column #%d: ", i+1, j+1);
			scanf("%d", &matrixOrigPtr[i][j]);
		}
	}

	/* Fill the values in transpose matrix */
	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			matrixTransPtr[j][i] = matrixOrigPtr[i][j];
		}
	}

	/* Print original matrix */
	printf("Original matrix:\n");
	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			printf("%d\t", matrixOrigPtr[i][j]);
		}
		puts("");
	}

	/* Print transpose matrix */
	printf("Transpose matrix:\n");
	for (i = 0; i < noCol; i++) {
		for (j = 0; j < noRow; j++) {
			printf("%d\t", matrixTransPtr[i][j]);
		}
		puts("");
	}

	/* Free memory for original and transpose matrix pointer */
	for (i = 0; i < noRow; i++) {
		free(matrixOrigPtr[i]);
	}
	free(matrixOrigPtr);
	for (i = 0; i < noRow; i++) {
		free(matrixTransPtr[i]);
	}
	free(matrixTransPtr);

	return 0;
}
