#include <stdio.h>
#define ROWSIZE 5
#define COLSIZE 5

int main() {

	int arr[ROWSIZE][COLSIZE] = {};

	int i = 0;
	int j = 0;
	int k = 0;
	int sum = 1;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
		{
			if (i % 2 == 0) {
				k = 4;
				k = k - 1;
			}
			else
			{
				k = 0;
				k++;
			}
			arr[i][k] = sum;
			sum++;
		}
		printf("\n");
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}