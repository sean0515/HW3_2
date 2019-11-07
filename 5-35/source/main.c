#include <stdio.h>
#include <stdlib.h>
unsigned long long int a,b,c;
int main(void)
{
	a = 1;
	b = 1;
	c = 0;
	while (a<=18446732407370955169)
	{
		b = b + c;
		c = a;
		a = b;
		printf("%llu,", b);
	}
	system("pause");
	return 0;
}

