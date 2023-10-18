/*#include <stdio.h>
int main(void) {

	int i = 0;
	int j = 0;
	int a = 0;
	int b = 1;
	int c = 1;

	printf("한개의 정수를 입력하세요");
	scanf_s("%d", &i);

	if (i == 1) {
		printf("%d", a);
		return 0;
	}
	else if (i == 2) {
		printf("%2d %2d", a, b);
		return 0;
	}
	else {
		printf("%2d %2d", a, b);
		for (j = 1; j < i - 1; j++) {
			c = a + b;
			printf(" %2d ", c);
			a = b;
			b = c;
		}
		return 0;
	}
}
*/