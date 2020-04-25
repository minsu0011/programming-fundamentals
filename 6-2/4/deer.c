#include<stdio.h>
int main() {
	int a, b, c;
	int min = 0;
	int max = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a <= b && a <= c)min = a;
	else if (b <= a && b <= c)min = b;
	else if (c <= b && c <= a)min = c;
	if (a >= b && a >= c)max = a;
	else if (b >= a && b >= c)max = b;
	else if (c >= b && c >= a)max = c;
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	return 0;
}