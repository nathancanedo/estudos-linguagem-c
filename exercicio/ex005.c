#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int numero_secreto = rand() % 5 + 1;
    int palpite;

    printf("<<< EX005 - Será que você acerta? >>>\n");
    printf("\n Vou pensar em um número de 1 a 5. Tente adivinhar!\n");
    printf("Qual é seu palpite? ");
    scanf("%d", &palpite);
    printf("\n----------------------------------------------\n");
    if (palpite == numero_secreto) {
        printf("Você acertou!\n");
    } else {
        printf("Você errou!\n");
    };
    printf("\nEu pensei no número %d e você pensou no número %d", numero_secreto, palpite);
    printf("\n----------------------------------------------\n\n");
}
