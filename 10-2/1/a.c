#include<stdio.h>
#include<string.h>
int palindrome(char* yesno) {
	int ret = 1;
	int len = strlen(yesno);
	for (int i = 0; i < len; i++)
		if (yesno[i] != yesno[len - 1 - i]) ret = 0;
	return ret;
}
int main() {
	char ch[15];
	scanf("%s", ch);
	if (palindrome(ch)) printf("This is a palindrome");
	else printf("This is not a palindrome");
	return 0;
}