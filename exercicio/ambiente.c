#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char r;
    char s;
    printf("Digite apenas uma letra: ");
    fflush(stdin);
    r = getchar();
    printf("Digite outra letra: ");
    fflush(stdin);
    s = getchar();
    printf("Voc� digitou � as letras \"%c\" e \"%c\"", r, s);
}
