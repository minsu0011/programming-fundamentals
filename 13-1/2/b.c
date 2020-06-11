#include<stdio.h>
#include<stdlib.h>
int main() {
	int num;
	scanf("%d", &num);
	int* pi = (int*)malloc(num * sizeof(int));
	for (int n = 0; n < num; n++) scanf("%d", (pi + n));
	for (int n = 0; n < num; n++)
		for (int m = n + 1; m < num; m++)
			if (pi[n] > pi[m]) {
				int tmp = pi[n];
				pi[n] = pi[m];
				pi[m] = tmp;
			}
	printf("min: %d\n", *(pi));
	printf("max: %d", *(pi + num - 1));
	free(pi);
	return 0;
}