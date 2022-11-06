#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome1[30];
    char nome2[30];
    char nome3[30];

    char sexo1;
    char sexo2;
    char sexo3;

    float nota1;
    float nota2;
    float nota3;

    printf("<<< EX004 - Listagem\n\n");
    printf("Cadastrando a primeira pessoa:\n");
    printf("---------------------------------------\n");
    printf("NOME: ");
    gets(nome1);
    printf("SEXO [M/F]: ");
    sexo1 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota1);

    printf("\nCadastrando a segunda pessoa:\n");
    printf("---------------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome2);
    printf("SEXO [M/F]: ");
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);

    printf("\nCadastrando a terceira pessoa:\n");
    printf("---------------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome3);
    printf("SEXO [M/F]: ");
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);

    printf("\nListagem Completa\n");
    printf("---------------------------------------\n");
    printf("NOME\t\tSEXO\tNOTA\n");
    printf("%s\t%3c\t%4.1f\n", nome1, sexo1, nota1);
    printf("%s\t%3c\t%4.1f\n", nome2, sexo2, nota2);
    printf("%s\t%3c\t%4.1f\n", nome3, sexo3, nota3);
    printf("---------------------------------------\n");

}
