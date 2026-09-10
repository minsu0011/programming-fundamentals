#include<stdio.h>
void square(double* pdvar) {
	*pdvar = *pdvar * *pdvar;
}
int main() {
	double dvar;
	scanf("%lf", &dvar);
	square(&dvar);
	printf("%lf", dvar);
	return 0;
}