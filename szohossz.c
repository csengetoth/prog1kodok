#include <stdio.h>

int main()
{
	int index = 1;
	int osszeg = 0;
	while((index<<=1))
		{
			index<<=1;
			osszeg++;	
		}
	printf("A szó hossza: ");
	printf("%d\n",osszeg);
}
