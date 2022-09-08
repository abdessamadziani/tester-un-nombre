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

    int T[2];
    printf("donner 1er nombre\n");
    scanf("%d",&T[0]);
     printf("donner 2eme nombre\n");
    scanf("%d",&T[1]);
     printf("donner 3eme nombre\n");
    scanf("%d",&T[2]);
    printf("L inverse est \n\n");
    printf("%d %d %d",T[2],T[1],T[0]);






}
