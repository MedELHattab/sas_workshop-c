#include <stdio.h>

int main(void) {
    int num;
    printf("Enter un nombre: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("le nombre %d est paire\n", num);
    } else {
        printf("le nombre %d est impaire .\n", num);
    }
    return 0;
}
