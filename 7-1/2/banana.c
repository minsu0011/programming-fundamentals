#include<stdio.h>
int main() {
	int num1;
	scanf("%d", &num1);
	if (num1 % 2 == 0) {
		int num2 = num1 * 2;
		printf("%d\n", num1);
		printf("%d\n", num2);
	}
	printf("%d\n", num1);
	printf("%d\n", num2);
	return 0;
}