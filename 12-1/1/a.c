#include<stdio.h>
#define PI 3.141592
int main() {
	double r;
	scanf("%lf", &r);
	printf("Perimeter: %lf", 2 * PI * r);
	printf("\n");
	printf("Area: %lf", r * r * PI);
	return 0;
}