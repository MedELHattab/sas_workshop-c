#include <stdio.h>
int main() {
int val1, val2;
int sum;
printf("entrer la premiere valeur : ");
scanf("%d", &val1);
printf("entrer la deuxieme valeur : ");
scanf("%d", &val2);
sum = val1 + val2;
if (val1 == val2) {
sum *= 3;
}
printf("La somme est : %d\n", sum);
return 0;
}
