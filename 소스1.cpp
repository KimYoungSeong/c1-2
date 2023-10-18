#include <stdio.h>
#define SIZE 10000
int main(void) {
	int arr[10000];
	int i = 0;
	int j = 1;
	for (i = 0; i < 10000; i++) {
		arr[i] = j++; //배열에 숫자를 집어넣는 과정
	}
	for (i = 0; i < 10000; i++) {
		if (i % 20 == 0) {
			printf("\n");
		}
		printf("%5d", arr[i]);
	}
}
