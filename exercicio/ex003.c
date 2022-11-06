#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    unsigned int idade;
    float peso;
    printf("<<< EX003 - Dados\n\n");
    printf("Qual é o seu nome?");
    gets(nome);
    printf("Quantos anos você tem?");
    scanf("%u", &idade);
    printf("Quanto você pesa? (Kg)");
    scanf("%f", &peso);
    printf("Seu nome é %s, você tem %u anos e pesa %.2fKg.", nome, idade, peso);

}
