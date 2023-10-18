#include <stdio.h>

int main(void) {
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int sum = 0;
	for (i = 9; i >= 1; i--) {
		sum = sum + 1;
		for (k = 1; k <= 10 - i; k++) {
			printf("%d", sum);
		}
		for (j = 1; j <= (i - 5) * 2 - 1; j++) {
			printf(" ");
		}
		for (l = 1; l < k; l++)
		{
			printf("%d", sum);
		}

		printf("\n");

		if (k > 4) {
			break;
		}
	}
	sum = 5;
	printf("555555555\n");
	for (i = 4; i >= 1; i--) {
		
		sum = sum + 1;
		for (k = 1; k <= i; k++) {
			printf("%d", sum);
		}
		for (j = 1; j <= (sum-5)* 2 - 1; j++) {
			printf(" ");
		}
		for (l = 1; l < k; l++)
		{
			printf("%d", sum);
		}
		printf("\n");
	}

}