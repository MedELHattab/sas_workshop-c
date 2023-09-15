#include <stdio.h>
int main() {
int num ;
printf("Entrez un nombre entier : ");
scanf("%d", &num);
printf("La valeur en octal est : %o\n", num);
printf("La valeur en hexadécimal est : %X\n", num);
return 0;
}
