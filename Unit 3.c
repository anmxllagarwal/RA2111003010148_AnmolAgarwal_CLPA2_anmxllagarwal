#include<stdio.h>

int get_input()
{
	int n;
	scanf("%d",&n);
	return n;
}

int main()
{
	printf("Number of rows in matrix: ");
	const int rows = get_input();
	printf("Number of columns in matrix: ");
	const int columns = get_input();
	int a[rows][columns];
	int b[rows][columns];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			printf("Value for matrix element [%d][%d]: ", i, j);
			a[i][j] = get_input();
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++) 
		{
			b[j][i] = a[i][j];
		}
	}
	printf("Original matrix is:\n");
	for (int i = 0; i < rows; i++)
	{
		printf("{ ");
		for (int j = 0; j < columns; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("}\n");
	}
	printf("Transpose of the matrix is:\n");
	for (int i = 0; i < rows; i++)
	{
		printf("{ ");
		for (int j = 0; j < columns; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("}\n");
	}
	return 0;
}
