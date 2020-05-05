#include<stdio.h>
int main() {
	double a = 1.23456789;
	double b = 0.0000123456789;
	printf("1) %.10lf %.10lf\n", a, b);
	printf("2) %e %e\n", a, b);
	printf("3) %E %E\n", a, b);
	printf("4) %g %g\n", a, b);
	printf("5) %G %G\n", a, b);
	return 0;
}