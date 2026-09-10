#include<stdio.h>
int gMul = 1;
int addTotal(int n) {
	int tmp = 0;
	for (int i = 1; i <= n; i++) tmp += i;
	return tmp;
}
void mulTotal(int n) {
	for (int i = 1; i <= n; i++) gMul *= i;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("addTotal(): %d\n", addTotal(n));
	mulTotal(n);
	printf("gMul: %d", gMul);
	return 0;
}