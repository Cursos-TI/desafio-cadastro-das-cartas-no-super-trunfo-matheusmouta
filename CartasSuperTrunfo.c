#include <stdio.h>

// Este é o código de incialização do Desafio Super Trunfo em C.

int main(){
    printf("Desafio Super Trunfo!\n");

    // Declarando variáveis e atribuindo os respectivos dados à Carta 1.
    
    char estado1 = 'A';
    char codigo1[20] = "A01";
    char nomedacidade1[50] = "São_Paulo";
    int populacao1 =  12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;
    
    //Atribuindo as funções printf e scanf.

    printf("Carta 1:\n Estado: \n", estado1);
    scanf("%c", &estado1);

    printf("Código:\n", codigo1);
    scanf("%s", &codigo1);

    printf("Nome da Cidade:\n", nomedacidade1);
    scanf("%s", &nomedacidade1);

    printf("População:\n ", populacao1);
    scanf("%d", &populacao1);

    printf("Área:\n ", area1);
    scanf("%f", &area1);

    printf("PIB:\n ", pib1);
    scanf("%f", &pib1);

    printf("Pontos:\n ", pontos1);
    scanf("%d", &pontos1);

    //Imprimindo os dados referentes à Carta 1.
    
    printf("Carta 1\n Estado: %c\n", estado1);
    
    printf("Código: %s\n", codigo1);
    
    printf("Nome Da Cidade: %s\n", nomedacidade1);
    
    printf("População: %d\n", populacao1);
    
    printf("Área: %f Km²\n", area1);
    
    printf("PIB: %f bilhoes de reais\n", pib1);
    
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    return 0;

}