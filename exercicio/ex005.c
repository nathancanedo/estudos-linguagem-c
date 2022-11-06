#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int numero_secreto = rand() % 5 + 1;
    int palpite;

    printf("<<< EX005 - Ser� que voc� acerta? >>>\n");
    printf("\n Vou pensar em um n�mero de 1 a 5. Tente adivinhar!\n");
    printf("Qual � seu palpite? ");
    scanf("%d", &palpite);
    printf("\n----------------------------------------------\n");
    if (palpite == numero_secreto) {
        printf("Voc� acertou!\n");
    } else {
        printf("Voc� errou!\n");
    };
    printf("\nEu pensei no n�mero %d e voc� pensou no n�mero %d", numero_secreto, palpite);
    printf("\n----------------------------------------------\n\n");
}
