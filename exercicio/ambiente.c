#include <stdio.h>

enum boolean {
    true = 1, false = 0
};

// Permitindo a sua declaração como um tipo qualquer:
typedef enum boolean bool;

void main() {
    bool c = false;
    bool e = false;

    if (c == true) {
        printf("Esta verdadeiro");
    } else
        if (c == false) {
            printf("Esta FALSO");
        }
}
