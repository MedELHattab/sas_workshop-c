#include <stdio.h>
int main(void)
{
float fahrenheit, celsius;
printf("entrer la température en Fahrenheit : ");
scanf("%f", &fahrenheit);
celsius = (fahrenheit - 32) / 1.8;
if (celsius < 0)
{
printf("la sensation est très froid\n");
}
else if (celsius >= 0 && celsius < 15)
{
printf("la sensation est froid\n");
}
else if (celsius >= 15 && celsius < 30) 
{
printf("la sensation est chaud\n");
}
else
{
printf("la sensation est très chaud\n");
}
printf("La température en Celsius est : %.2f°C\n", celsius);
return 0;
}
