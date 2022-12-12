#include <stdio.h>
#include "hfcal.h"

void display_calories(float weight, float distance, float coeff) {
    printf( "Weight: %3.2f pounds\n", weight );
    printf( "Distance: %3.2f miles\n", distance );
    printf( "Burned cals: %4.2f cals\n", coeff * weight * distance );
}

