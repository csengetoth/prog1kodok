#include <stdio.h>
int main()
{
	//változócsere összeadással

	int szam1,szam2;

	printf("Kérek két számot!\n");
	scanf("%d",&szam1);
	scanf("%d",&szam2);

	szam1 = szam1 + szam2;
	szam2 = szam1 - szam2;
	szam1 = szam1 - szam2;

	printf("A két szám felcserélve:\n");
	printf("%d\n",szam1);
	printf("%d\n",szam2);
}
