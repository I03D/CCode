#include <stdio.h>
typedef union {
    float lemon;
    int lime_pieces;
} lemon_lime;

typedef struct{
    float tequila;
    float cointreau;
    lemon_lime citrus;
} margarita;

int main() {
    margarita m = {
        2.0, 1.0, {.lime_pieces=1}
    };
    printf("%2.1f porcii tequily\n%2.1f porcii cuantro\n%i kysochek laima\n", m.tequila, m.cointreau, m.citrus.lime_pieces);
    return 0;
}

