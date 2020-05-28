#include<stdio.h>
struct imformation {
	char name[30];
	int age;
};
struct imformation gimoring;
int main() {
	scanf("%s %d", gimoring.name, &gimoring.age);
	printf("name: %s\nage: %d", gimoring.name, gimoring.age);
	return 0;
}