#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    char endereco[40];
    printf("Digite seu nome: ");
    gets(nome);
    printf("Onde você mora? ");
    gets(endereco);
    printf("Seja bem vindo, %s! Seu endereço é %s!", nome, endereco);
}
