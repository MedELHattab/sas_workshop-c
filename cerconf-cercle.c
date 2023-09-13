#include <stdio.h>
#include <math.h>
int main() {
int ray, m;
const int pi = 3.14159265359;
printf("entrer le rayon du cercle : ");
scanf("%d", &ray);
m = 2 * pi * ray;
printf("La circonférence du cercle est : %d\n", m);
return 0;
}
