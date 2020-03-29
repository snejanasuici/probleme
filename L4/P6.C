#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b)
{
	int *s;
	s = (int*)malloc(sizeof(int));
	*s = a + b;
	return *s;
}

int main()
{
	int a, b;

	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);

	printf("%d+%d=%d", a, b, suma(a, b));

	return 0;
}
