#include <stdio.h>
#define SIZE 25 
int main(void) {
	int arr[5][5];
	int i = 0;
	int j = 0;
	int k = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			arr[i][j] = k++;
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

