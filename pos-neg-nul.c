#include <stdio.h>
int main() {
int num;
printf("Entrez un nombre : ");
scanf("%d", &num);
if (num > 0) {
printf("Le nombre est positif.\n");
} 
else if (num < 0) {
printf("Le nombre est négatif.\n");
} 
else {
printf("Le nombre est nul.\n");
}
return 0;
}
