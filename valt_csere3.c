#include <stdio.h>

int main()
{
	//változócsere kizáró vagy, xor művelettel

	int szam1, szam2;

	printf("Kérek 2 számot!\n");
	scanf("%d", &szam1);
	scanf("%d", &szam2);
	
	szam1 = szam1 ^ szam2;
	szam2 = szam1 ^ szam2;
	szam1 = szam1 ^ szam2;

	printf("A két szám felcserélve:\n");
	printf("%d\n", szam1);
	printf("%d\n", szam2);

	
}
