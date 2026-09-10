#include<stdio.h>
#include<string.h>
int main() {
	char arr[20][30];
	char check[30];
	int cnt = 0;
	int ret = 0;
	while (1) {
		printf("Enter a word (Enter 'end' to quit): ");
		scanf("%s", arr[cnt]);
		if (!strcmp(arr[cnt], "end")) {
			printf("%d words in the list:\n", cnt);
			for (int i = 0; i < cnt; i++)
				printf("%s ", arr[i]);
			printf("\n");
			break;
		}
		for (int i = 0; i < cnt; i++)
			if (!strcmp(arr[cnt], arr[i])) ret = 1;
		if (ret == 1) {
			printf("This word already exists. Please enter another word.\n");
			cnt--;
		}
		ret = 0;
		cnt++;
	}
	ret = 0;
	while (1) {
		printf("Enter a word to search (Enter 'end' to quit): ");
		scanf("%s", check);
		for (int i = 0; i < cnt; i++) {
			if (!strcmp(check, "end")) ret = 2;
			if (!strcmp(arr[i], check)) ret = 1;
		}
		if (ret == 1) printf("This word is in the list.\n");
		else if (ret == 0) printf("This word is NOT in the list.\n");
		else break;
		ret = 0;
	}
	return 0;
}