#include<stdio.h>
int main() {
	int arr[5];
	int tmp = 0;
	int sm = 0;
	for (int a = 0; a < 5; a++) {
		scanf("%d", &arr[a]);
		sm += arr[a];
	}
	for (int a = 0; a < 5; a++) {
		for (int b = a + 1; b < 5; b++) {
			if (arr[a] > arr[b]) {
				tmp = arr[a];
				arr[a] = arr[b];
				arr[b] = tmp;
			}
		}
	}
	printf("min: %d\nmax: %d\nsum: %d", arr[0], arr[4], sm);
	return 0;
}