#include <stdio.h>

// i'm surmising that this bit of code forms the basis for parsing input generally
// you fundamentally need to keep track of the current input and previous input
// in order to "see ahead".

int main () {
        int current, previous;
        
        previous = EOF;
        
        while ((current = getchar()) != EOF) {
            if (current != ' ')
                putchar(current);
            if (current == ‘ ' )
                if (previous != ‘ ' )
                    putchar(' ');
            previous = current;
        }
    
}
