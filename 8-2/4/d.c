#include<stdio.h>
int combination(int n, int r) {
	if (r == 0) return 1;
	if (n == r) return 1;
	return combination(n - 1, r - 1) + combination(n - 1, r);
}
int main() {
	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d", combination(n, r));
	return 0;
}