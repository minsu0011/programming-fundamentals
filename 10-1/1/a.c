#include<stdio.h>
#include<string.h>
bool ret(char* a, char* b) {
	if (strcmp(a, b)) return false;
	else return true;
}
int main() {
	char a[15];
	char b[15];
	char c[15];
	bool tf;
	scanf("%s", a);
	scanf("%s", b);

	printf("str1: %s\n", a);
	printf("str2: %s\n", b);

	printf("length of str1: %d\n", strlen(a));
	printf("length of str2: %d\n", strlen(a));

	tf = ret(a, b); // 두 문자열이 같은 지 비교 (a,b 배열 이어붙이기 전에)

	printf("str1: %s\n", a);
	printf("str2: %s\n", b);

	if (tf) printf("same");
	else printf("not same");

	return 0;
}