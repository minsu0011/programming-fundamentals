#include<stdio.h>
#include<string.h>
typedef struct {
	char name[7];
	int score;
} Person;
void printScoreStars(Person* persons, int len) {
	for (int i = 0; i < len; i++) {
		printf("%s", persons[i].name);
		for (int j = strlen(persons[i].name) + 1; j <= 6; j++) printf(" ");
		for (int j = 1; j <= persons[i].score / 5; j++) printf("*");
		if (i != 2) printf("\n");
	}
}
int main() {
	Person nameAndScore[3];
	for (int i = 0; i < 3; i++)
		scanf("%s %d", nameAndScore[i].name, &nameAndScore[i].score);
	printScoreStars(nameAndScore, 3);
	return 0;
}