#include <stdio.h>

typedef struct{
    const char *name;
    const char *species;
    int age;
} turtle;

void happy_bd(turtle *t) {
    (*t).age = (*t).age + 1;
    printf( "S dnem Rojdenia, %s! Teper tebe %i let!\n",
        (*t).name, (*t).age );
}

int main() {
    turtle murtle = {"Tortila", "Kojistaya cherepaha", 99};
    happy_bd(&murtle);
    printf("%s projila %i let\n", murtle.name, murtle.age);

    return 0;
}

