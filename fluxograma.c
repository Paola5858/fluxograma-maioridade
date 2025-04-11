#include <stdio.h>

int main() {
    int idade;
    char nome[50]; 

  
    printf("Digite seu nome: ");
    scanf("%s", nome); 

 
    printf("Digite sua idade: ");
    scanf("%d", &idade);

 
    if (idade >= 18) {
        printf("%s, você é maior de idade. Momento para construir seu futuro!\n", nome);
    } else {
        printf("%s, você é menor de idade. Fase de descoberta e crescimento!\n", nome);
    }

    return 0;
}
