#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inventory.h"

int main() {

    int count = 0;
    char QUIT;

    do {

        printf("Welcome!\nWould you like to quit? (Y/N): ");
        scanf("%c", &QUIT);
        count++;
        printf("Count = %d\n", count);

    } while(QUIT != 'Y');

    return 0;
}
