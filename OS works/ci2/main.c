#include <stdio.h>

int main() {
    char word[40];
    int i = 0;
    while (scanf("%39s", word) == 1) {
        i++;
        if (i % 2)
        fprintf(stdout, "%s\n", word);
        else
        fprintf(stderr, "%s\n", word);
    }
    return 0;
}
    
