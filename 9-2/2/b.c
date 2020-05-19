#include<stdio.h>
int main() {
	int arr[5];
	int* parr = arr;
	int tmp;
	for (int i = 0; i < 5; i++)
		scanf("%d", (parr + i));
	tmp = *parr;
	*parr = *(parr + 4);
	*(parr + 4) = tmp;
	tmp = *(parr + 1);
	*(parr + 1) = *(parr + 3);
	*(parr + 3) = tmp;
	for (int i = 0; i < 5; i++)
		printf("%d ", *(parr + i));
	return 0;
}