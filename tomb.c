#include <stdio.h>

int main()
{
	int tomb[5];
	int i = 0;
	for(i = 0; i < 5; tomb[i] = i++)
	{
		printf("tomb[%i] = %i\n", i, tomb[i]);
	}
}