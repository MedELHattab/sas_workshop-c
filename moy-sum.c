#include <stdio.h>
int main(void)
{
int  a, b, c, d;
int  sum, moy;
printf("entrer le premier nombre : ");
scanf("%d", &a);
printf("entrer le deuxième nombre : ");
scanf("%d", &b);
printf("Entrez le troisième nombre : ");
scanf("%d", &c);
printf("Entrez le quatrième nombre : ");
scanf("%d", &d);
sum = a + b + c + d;
moy = sum / 4;
printf("La somme des nombres est : %d\n", sum);
printf("La moyenne des nombres est : %d\n", moy);
return 0;
}
