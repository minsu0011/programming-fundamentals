#include<stdio.h>
int main() {
	double arr[5];
	double* parr = arr;
	double sumarr = 0;
	for (int i = 0; i < 5; i++)
		scanf("%lf", (parr + i));
	for (int i = 0; i < 5; i++) {
		*(parr + i) *= 2;
		sumarr += *(parr + i);
		printf("%lf\n", *(parr + i));
	}
	printf("sum: %lf", sumarr);
	return 0;
}