#include<stdio.h>
#include<string.h>
void swap(const char** arr1, const char** arr2) {
	const char* arr_t = *arr1;
	*arr1 = *arr2;
	*arr2 = arr_t;
}
void printArray(char** arr, int len) {
	printf("Array  [0]:%s,  [1]:%s", arr[0], arr[1]);
	printf("\n");
}
int main() {
	const char* arr[2] = {
		"aaa",
		"bbb"
	};
	printArray(arr, 3);
	swap(&arr[0], &arr[1]);
	printArray(arr, 3);
}