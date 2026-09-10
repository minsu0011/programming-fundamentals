#include<stdio.h>
int main() {
	int a;
	double b;
	scanf("%d %lf", &a, &b);
	printf("%10d%10d%10d\n", a * 2, a * 4, a * 8);
	printf("%10.2lf%10.2lf%10.2lf", b * 2, b * 4, b * 8);
	return 0;
}