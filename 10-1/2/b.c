#include<stdio.h>
#include<string.h>
int main() {
	char a[15];
	int a_length;
	scanf("%s", a);
	a_length = strlen(a);
	for (int i = 0; i < a_length; i++) {
		if (a[i] >= 65 && a[i] <= 90) a[i] += 32;
		else if (a[i] >= 97 && a[i] <= 122) a[i] -= 32;
	}
	printf("%s", a);
}