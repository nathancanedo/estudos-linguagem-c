#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    unsigned int idade;
    float peso;
    printf("<<< EX003 - Dados\n\n");
    printf("Qual � o seu nome?");
    gets(nome);
    printf("Quantos anos voc� tem?");
    scanf("%u", &idade);
    printf("Quanto voc� pesa? (Kg)");
    scanf("%f", &peso);
    printf("Seu nome � %s, voc� tem %u anos e pesa %.2fKg.", nome, idade, peso);

}
