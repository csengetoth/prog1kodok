#include <stdio.h>
#include "stdlib.h"
#include <math.h>

void kiir(double t[]) 
{
    	int db = 4;
	int i;
	for (i = 0; i< db; ++i) 
		{
        		printf("Az %d. lap erteke: %f\n",i+1,t[i]);
    		}
}

double ertek(double PR[], double PRv[]) 
{
    double s = 0.0;
    int i;
    int db = 4;
    for (i = 0; i < db; ++i) 
	{
        	s = s + fabs(PR[i] - PRv[i]); //abszolútérték számolására
    	}	
    return s;
}

int main(void) 
{
    double T[4][4] = 
	{
		{0.0, 0.0, 1.0 / 3.0, 0.0},
		{1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
		{0.0, 1.0 / 2.0, 0.0, 0.0},
		{0.0, 0.0, 1.0 / 3.0, 0.0}
	};
    double PR[4] = {0.0, 0.0, 0.0, 0.0};
    double PRv[4] = {1.0/4.0,1.0/4.0,1.0/4.0,1.0/4.0};
    int i, j;
    for(;;) 
	{

        	for (i = 0; i < 4; ++i) 
			{
            			PR[i] = PRv[i];
        		}

       		for (i = 0; i < 4; ++i) 
			{
            			double temp = 0;

            			for (j = 0; j < 4; ++j) 
					{
                				temp = temp + T[i][j]*PR[j];
            				}

            			PRv[i] = temp;
        		}
       		if (ertek(PR, PRv) < 0.00000001)
            		break;
   	 }
    kiir (PR);
    return 0;
}

