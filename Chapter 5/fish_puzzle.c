#include <stdio.h>

struct exercise{
    const char *description;
    float duration;
};

struct meal{
    const char *ingredients;
    float weight;
};

struct preferences{
    struct meal food;
    struct exercise exercise;
};

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    int fav_music;

    struct preferences care;
};

void catalog(struct fish f) {
    printf( "%s - Eto %s s %i zubami. emu %i goda\n",
        f.name, f.species, f.teeth, f.age );
}

void label(struct fish f) {
    printf( "Klichka: %s\nRaznovidnost: %s\n %i goda, %i zubov\n",
        f.name, f.species, f.age, f.teeth );

    printf( "Davat %2.2f kg %s i razreshat %s na protyajenii %2.2f chasov\n",
        f.care.food.weight, f.care.food.ingredients, f.care.exercise.description, f.care.exercise.duration );
}

int main() {
    struct fish snappy = { "Zubastic", "Pirania", 69, 4, { { "myaso", 0.2 }, { "kypatsa v djakuzi", 7.5 } } };

    catalog(snappy);
    label(snappy);

    return 0;
}

