#include <stdio.h>
#include <string.h>

void print_reverse(char *s) {
    size_t len = strlen(s);
    char *t = s + len - 1;
    while (t >= s) {
        printf("%c", *t);
        t--;
    }
}

int main() {
    print_reverse("123");
    return 0;
}