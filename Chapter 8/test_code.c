#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"

int main() {
    char s[] = "Ckaji drug i prohodi";

    encrypt(s);
    
    printf("Zachifrovano v '%s'\n", s);
    printf("Kontrolnaya summa %i\n", checksum(s));

    encrypt(s);

    printf("Raschifrovano obratno v '%s'\n", s);
    printf("Kontrolnaya summa %i\n", checksum(s));

    return 0;
}

