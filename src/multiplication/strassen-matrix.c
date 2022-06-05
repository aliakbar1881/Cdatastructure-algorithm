#include <stdio.h>
#include <stdlib.h>

typedef struct matrix{
	int row;
	int column;
	int **matrix;
} matrix;

matrix generatematrix(matrix);
matrix strasensmultiplication(matrix firstMatrix, matrix secondMatrix);

int main(int argc, char *argv[]) {
	matrix firstMatrix;
	matrix secondMatrix;
	firstMatrix = generatematrix(firstMatrix);
	secondMatrix = generatematrix(secondMatrix);
	printf("---%d\n", firstMatrix.matrix[0][1]);
	printf("---%d\n", secondMatrix.matrix[1][1]);
	free(firstMatrix.matrix);
	free(secondMatrix.matrix);
	exit(0);
}

matrix generatematrix(matrix entity) {
	printf("row : \n");
	scanf("%d", &(entity.row));
	printf("column : \n");
	scanf("%d", &(entity.column));
	int **temp;
	temp = malloc(sizeof(int)*entity.row);
	for(size_t i = 0; i < entity.row; i++) {
		temp[i] = malloc(sizeof(int)*entity.column);
	}
	entity.matrix = temp;
	for(size_t i = 0; i < entity.row; i++) {
		for(size_t j = 0; j < entity.column; j++) {
			printf("[%ld], [%ld]i : \n", i, j);
			scanf("%d", &(entity.matrix[i][j]));
		}
	}
	return entity;
}

matrix strasensmultiplication(matrix firstMatrix, matrix secondMatrix) {
	for(size_t i = 0; i < matrix; i++) {
		`
	}
}
