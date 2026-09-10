#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	if (n < -10)printf("n <-10");
	if (n >= -10 && n < 0)printf("-10 <= n < 0");
	if (n >= 0 && n < 10)printf("0 <= n <10");
	if (n >= 10)printf("n>=10");
	return 0;
}