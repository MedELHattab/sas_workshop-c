#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;
    printf("Entrer le coefficient a: ");
    scanf("%lf", &a);
    printf("Entrer le coefficient b: ");
    scanf("%lf", &b);
    printf("Entrer le coefficient c: ");
    scanf("%lf", &c);
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("les deux  solutions sont : x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("l'équation a une seule solution : x1 = %.2lf\n", x1);
    } else {
        printf("l'équation n'a pas de solution\n");
}
return 0;
}

