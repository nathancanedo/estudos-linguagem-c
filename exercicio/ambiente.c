#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("O %s tem %i anos de idade.\n", "Gustavo Guanabara", 39);
    printf("Seu peso atual � de %6.2fKg\n", 97.5);
    printf("O seu sexo � %c", 'M');
}
