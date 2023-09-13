#include <stdio.h>
int main(void)
{
int a, b;
printf("entrer la valeur de a : ");
scanf("%d", &a);
printf("Entrez la valeur de b : ");
scanf("%d", &b);
int add = a + b;
int soustr = a - b;
int mult = a * b;
double div = 0.0;
if (b != 0)
{
div = (double)a / b;
}
else
{
printf("Division par 0 est impossible.\n");
}
int modulo = 0;
if (b != 0)
{
modulo = a % b;
}
else
{
printf("Le modulo n'est pas défini pour b = 0.\n");
}
printf("a + b = %d\n", add);
printf("a - b = %d\n", soustr);
printf("a * b = %d\n", mult);
if (b != 0)
{
printf("a / b = %.2lf\n", div);
printf("a %% b = %d\n", modulo);
}    
return 0;
}
