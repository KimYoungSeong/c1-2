/*#include <stdio.h>
#define ROWSIZE 5
#define COLSIZE 5
#define ROW 5
#define COL 5

int main() {
	int arr[ROWSIZE][COLSIZE] = {};
	int brr[ROW][COL] = {};
	int i = 0;
	int j = 0;
	int sum = 1;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = sum;
			sum++;
			brr[j][4-i] = arr[i][j];
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d ", brr[i][j]);
		}
		printf("\n");
	}
}*/