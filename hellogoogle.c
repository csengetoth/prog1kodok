#include <stdio.h>

void kiir( double tomb [], int db)
{
	int i;
	
	for(i = 0; i < db; ++i)
		{
			printf("%f\n", tomb[i]);
		}
}
double tavolsag(double PR[], double PRv[], double L[][], int n)
{
	double osszeg = 0.0;
	int i;
	for (i = 0; i < n; ++i)
		{
			osszeg += (PRv[i]- PR[i]) * (PRv[i] - PR[i]);
		}
	return sqrt(osszeg);
	for(;;)
		{
			for(i = 0; i < 4; ++i)
				{
					PR[i] = 0.0;
					for( int j = 0; j < 4; ++j)
					PR[i] += (L[i][j] * PRv[j]);
				}
			if(tavolsag (PR, PRv, 4) < 0.00000001)
				break;
			for(i = 0; i < 4; ++i)
				{
					PRv[i] = PR[i];
				}
			kiir(PR, 4);
			return 0;
		}
	
}
