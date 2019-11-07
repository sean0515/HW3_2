#include <stdio.h>
#include <stdlib.h>

int a, b, i;
int main(void)
{
	printf("Enter two integers:");
	scanf_s("%d %d", &a, &b);

	printf("%1d\n", recursive(a));
	system("pause");
	return 0;
}

long recursive(long sum)
{
	for (i = 1; i < b; i++)
	{
		sum *= a;
	}
	return sum;
}