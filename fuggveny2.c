#include <stdio.h>

int f(int* x)
{
	return ++ *x;
}

int main()
{
	int a = 1;
	printf("%i %d\n",a,f(&a));
}