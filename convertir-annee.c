#include <stdio.h>

int main() {
int annee;
int choix;
printf("Entrez une annee : ");
scanf("%d", &annee);
printf("\nMenu de conversion :\n");
printf("1. Convertir en mois\n");
printf("2. Convertir en jours\n");
printf("3. Convertir en heures\n");
printf("4. Convertir en minutes\n");
printf("5. Convertir en secondes\n");
printf("Choisissez une option (1-5) : ");
scanf("%d", &choix);
switch (choix) {
case 1:
printf("%d annees est equivalent a %d mois.\n", annee, annee*12);
break;
case 2:
printf("%d annees est equivalent a %d jours.\n", annee, annee * 365);
break;
case 3:
printf("%d annees est equivalent a %d heures.\n",annee, annee * 9125);
break;
case 4:
printf("%d annees est equivalent a %d minutes.\n", annee, annee * 547500);
break;
case 5:
printf("%d annees est equivalent a %ld secondes.\n", annee,(long)annee * 32850000);
break;
}
return 0;
}
