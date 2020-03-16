#include <stdio.h>

int f(int x)
	{
		return x+x;
	}
int main()
{
	int a = 1;
	printf("%d %d\n",f(a),a);
}