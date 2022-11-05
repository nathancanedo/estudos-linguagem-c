#include <stdio.h>
#include <locale.h>

unsigned int idade = 39;
char nome[] = "Gustavo Guanabara";
float peso = 97.5;
char sexo = 'M';

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("O %s tem %i anos de idade.\n", nome, idade);
    printf("Seu peso atual é de %6.2fKg\n", peso);
    printf("O seu sexo é %c", sexo);
}
