#include<stdio.h>
typedef struct {
	int xpos;
	int ypos;
}Point;
Point p1;
Point p2;
Point p3;
Point getScale2xPoint(const Point* pxy) {
	p2.xpos = (*pxy).xpos * 2;
	p2.ypos = (*pxy).ypos * 2;
	return p2;
}
int main() {
	scanf("%d %d", &p1.xpos, &p1.ypos);
	p3 = getScale2xPoint(&p1);
	printf("%d %d", p3.xpos, p3.ypos);
	return 0;
}