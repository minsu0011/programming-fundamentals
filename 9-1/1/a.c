#include<stdio.h>
int main() {
	int i;
	int* pi;
	scanf("%d", &i);
	pi = &i;
	printf("%d\n", *pi);
	*pi += 10;
	printf("%d", *pi);
	return 0;
}