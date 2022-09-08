#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    /*
  int nb,inverse;
     printf("donner un nombre : \n");
     scanf("%d",&nb);
     inverse=0;
    while(nb!=0)
    {

        inverse=(inverse*10)+(nb%10);
        (nb=nb/10);
    }
    printf("L inverse est %d",inverse);
    */

    char T[2];
    printf("donner 1er nombre\n");
    scanf("%s %s %s",&T[0],&T[1],&T[2]);

    printf("L inverse est \n\n");
    printf("%c %c %c",T[2],T[1],T[0]);






}
