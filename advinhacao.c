#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    printf("*****************************************\n");
    printf("*          Jogo da Advinhacao!          *\n");
    printf("*****************************************\n");

    int num_secreto = 45, chute;

    printf("Digite um numero inteiro: ");
    scanf("%d", &chute);

    printf("Seu chute foi %d", chute);
}