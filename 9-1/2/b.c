#include<stdio.h>
int main() {
	int i;
	double d;
	char c;
	int* pi;
	double* pd;
	char* pc;
	scanf("%d %lf %c", &i, &d, &c);
	printf("i: %d, %p\n", i, &i);
	printf("d: %lf, %p\n", d, &d);
	printf("c: %c, %p\n\n", c, &c);
	pi = &i;
	pd = &d;
	pc = &c;
	*pi += 1;
	*pd += 1;
	*pc += 1;
	printf("i+1: %d\n", *pi);
	printf("d+1: %lf\n", *pd);
	printf("c+1: %c\n\n", *pc);
	printf("size of pi: %d\n", sizeof(pi));
	printf("size of pd: %d\n", sizeof(pd));
	printf("size of pc: %d", sizeof(pc));
	return 0;
}