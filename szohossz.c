#include <stdio.h>

int main()
{
	int index = 1;
	int osszeg = 1;
	while((index<<=1))
		{
			osszeg++;	
		}
	printf("A szó hossza: ");
	printf("%d\n",osszeg);
}
