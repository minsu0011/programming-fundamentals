#include<stdio.h>
#include<stdlib.h>
typedef struct {
	int xpos;
	int ypos;
}Point;
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	Point* pi = (Point*)malloc(sizeof(Point));
	pi->xpos = num1;
	pi->ypos = num2;
	printf("%d %d", pi->xpos, pi->ypos);
	free(pi);
	return 0;
}