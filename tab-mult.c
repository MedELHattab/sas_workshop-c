#include <stdio.h>
int main() {
int num;
printf("entrer un nombre : ");
scanf("%d", &num);
printf("Table de multiplication pour %d :\n", num);
for (int i = 1; i <= 10; i++) {
int result = num * i;
printf("%d x %d = %d\n", num, i, result);
}
return 0;
}
