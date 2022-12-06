#include <stdio.h>
typedef enum {
    COUNT, POUNDS, PINTS
} unitofmeasure;

typedef union {
    short count;
    float weight;
    float volume;    
} quantity;

typedef struct {
    const char *name;
    const char *country;
    quantity amount;
    unitofmeasure units;
} fruitorder;

void display(fruitorder order) {
    printf("Zakaz soderjit:  ");
    if (order.units == PINTS)
        printf("%2.2f pint %s\n", order.amount.volume, order.name);
    else if (order.units == POUNDS)
        printf("%2.2f funtov %s\n", order.amount.weight, order.name);
    else 
        printf("%i %s\n", order.amount.count, order.name);
}

int main() {
    fruitorder apples = {"apple", "England", .amount.count = 144, COUNT};
    fruitorder strawberries = {"strawberry", "Spain", .amount.weight = 17.6, POUNDS};
    fruitorder oj = {"orange juice", "USA", .amount.volume = 10.5, PINTS};
    display(apples);
    display(strawberries);
    display(oj);
    return 0;
}