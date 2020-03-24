#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, nr;

	nr = 7;

	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);

	while (nr >= 0)
	{
		if ((((1 & (a >> nr)) == 1) && ((1 & (b >> nr)) == 1)) || (((1 & (a >> nr)) == 0) && ((1 & (b >> nr)) == 0))) a = a & ~(1 << nr);
		else a = a | (1 << nr);
		nr--;
	}

	nr = 7;

	while (nr >= 0)
	{
		if ((((1 & (a >> nr)) == 1) && ((1 & (b >> nr)) == 1)) || (((1 & (a >> nr)) == 0) && ((1 & (b >> nr)) == 0))) b = b & ~(1 << nr);
		else b = b | (1 << nr);
		nr--;
	}

	nr = 7;

	while (nr >= 0)
	{
		if ((((1 & (a >> nr)) == 1) && ((1 & (b >> nr)) == 1)) || (((1 & (a >> nr)) == 0) && ((1 & (b >> nr)) == 0))) a = a & ~(1 << nr);
		else a = a | (1 << nr);
		nr--;
	}

	printf("%d %d", a, b);

	return 0;
}
