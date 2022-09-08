#include <stdio.h>
#include <stdlib.h>


void main() {
    int age;
    char nom[20] , prenom[20], telephone[20];
    char sexe;

    printf("Veuillez saisie votre nom \n");
    scanf("%s",nom);
    printf("Veuillez saisie votre prenom \n");
    scanf("%s",prenom);
    printf("Veuillez saisie votre age \n");
    scanf("%d",&age);
    printf("Veuillez saisie votre sexe \n");
    scanf(" %c",&sexe);
    printf("Veuillez saisie votre telephone \n");
    scanf("%s",telephone);
    printf("Bienvenu votre profil est :  %s , %s, %d ans, %c , %s   " ,nom,prenom,age,sexe,telephone);


}
