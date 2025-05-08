#include <stdio.h>

// Este é o código de incialização do Desafio Super Trunfo em C.

int main(){
    printf("Desafio Super Trunfo!\n");

    // Declarando variáveis e atribuindo os respectivos dados da Carta 1.
    
    char estado = 'A';
    char codigo[20] = "A01";
    char nomedacidade[50] = "São_Paulo";
    int populacao =  12325000;
    float area = 1521.11;
    float pib = 699.28;
    int pontos = 50;
    
    //Atribuindo as funções printf e scanf.

    printf("Carta 1:\n Estado: \n", estado);
    scanf("%c", &estado);

    printf("Código:\n", codigo);
    scanf("%s", &codigo);

    printf("Nome da Cidade:\n", nomedacidade);
    scanf("%s", &nomedacidade);

    printf("População:\n ", populacao);
    scanf("%d", &populacao);

    printf("Área:\n ", area);
    scanf("%f", &area);

    printf("PIB:\n ", pib);
    scanf("%f", &pib);

    printf("Pontos:\n ", pontos);
    scanf("%d", &pontos);

    //Imprimindo os dados referentes a primeira Carta 1.
    
    printf("Carta 1\n Estado: %c\n", estado);
    
    printf("Código: %s\n", codigo);
    
    printf("Nome Da Cidade: %s\n", nomedacidade);
    
    printf("População: %d\n", populacao);
    
    printf("Área: %f Km²\n", area);
    
    printf("PIB: %f bilhoes de reais\n", pib);
    
    printf("Número de Pontos Turísticos: %d\n", pontos);


    return 0;

}