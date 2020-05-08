#include<stdio.h>
int pivo(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return pivo(n - 1) + pivo(n - 2);
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", pivo(n));
	return 0;
}