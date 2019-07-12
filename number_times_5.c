#include <stdio.h>
#include <ctype.h>

enum States {
    SCANNING,
    NUMBER
};

int main() {
    int c, state;

    state = SCANNING;
    unsigned long long value = 0ull;
    while ((c = getchar()) != EOF) {
        if (isdigit(c)) {
            unsigned int num = c - '0';
            if (state == SCANNING) {
                value = num;
                state = NUMBER;
            } else {
                value = value * 10ull + num;
            }
        } else {
            if (state == NUMBER) {
                printf("%llu", value * 5ull);
                state = SCANNING;
            }
            putchar(c);
        }
    }
}
