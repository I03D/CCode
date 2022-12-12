#include <stdio.h>

typedef struct {
    const char *description;
    float value;
} swag;

typedef struct{
    swag *swag;
    const char sequence;
} combination;

typedef struct{
    combination numbers;
    const char *make;
} safe;

int main() {
    swag gold = {"Zoloto!", 1000000.0};
    combination numbers = {&gold, "6502"};
    safe s = {numbers, "RAMACON250"};

    printf("Soderjimoe = %s\n", s.numbers.swag->description);

    return 0;
}

