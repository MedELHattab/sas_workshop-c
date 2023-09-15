#include <stdio.h>
int main() {
char carac;
printf("entrer un caractere : ");
scanf(" %c", &carac);
if (carac >= 'A' && carac <= 'Z') {
printf("Le caractere %c est une majuscule.\n", carac);
} 
else 
{
printf("Le caractere %c n'est pas une majuscule.\n", carac);
}
return 0;
}
