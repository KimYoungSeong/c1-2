/*#include <stdio.h>
#define ROWSIZE 3
#define COLSIZE 3
#define LEFT 3
#define RIGHT 3
#define LET 3
#define RIG 3

int main(){

	int arr[ROWSIZE][COLSIZE] = {1,2,3,4,5,6,7,8,9};
	int brr[LEFT][RIGHT] = { 10,20,30,40,50,60,70,80,90 };
	int krr[LET][RIG] = {};

	int i = 0;
	int j = 0;
	int l = 0;
	int cnt = 0;
	int sum = 0;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2d ", brr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (l = 0; l < 3; l++) {

		for (i = 0; i < 3; i++) {

			for (j = 0; j < 3; j++) {
				cnt = arr[l][j] * brr[j][i];
				sum += cnt;
			}
			krr[l][i] = sum;
			sum = 0;
			printf("%2d ", krr[l][i]);
		}
		printf("\n");
	}
}*/