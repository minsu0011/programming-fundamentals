#include<stdio.h>
int main() {
	char t;
	while (1) {
		scanf(" %c", &t);
		if (t > 96 && t < 123) {
			printf("%c\n", t - 32);
			continue;
		}
		else if (t > 64 && t < 91) {
			printf("%c\n", t + 32);
			continue;
		}
		else {
			printf("exit");
			break;
		}
	}
	return 0;
}