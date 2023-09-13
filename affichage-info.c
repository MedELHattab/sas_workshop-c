#include <stdio.h>

int main() {
    char nom[50], prenom[50], sexe[10], numeroTelephone[15];
    int age;
    printf("Entrez votre nom : ");
    scanf("%s", nom);
    printf("Entrez votre prénom : ");
    scanf("%s", prenom);
    printf("Entrez votre âge : ");
    scanf("%d", &age);
    printf("Entrez votre sexe : ");
    scanf("%s", sexe);
    printf("Entrez votre numéro de téléphone : ");
    scanf("%s", numeroTelephone);
    printf("\nInformations personnelles :\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d ans\n", age);
    printf("Sexe : %s\n", sexe);
    printf("Numéro de téléphone : %s\n", numeroTelephone);

    return 0;
}
