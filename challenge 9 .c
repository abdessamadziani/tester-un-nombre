#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float Xa,Xb,Ya,Yb,D;
printf("donner la valeur de Xa\n");
scanf("%f",&Xa);
printf("donner la valeur de Ya\n");
scanf("%f",&Ya);
printf("donner la valeur de Xb\n");
scanf("%f",&Xb);
printf("donner la valeur de Yb\n");
scanf("%f",&Yb);
D=sqrt( pow((Xb-Xa),2)+pow((Yb-Ya),2));
printf("la distance entre les deux points est : %.2f",D);

}


