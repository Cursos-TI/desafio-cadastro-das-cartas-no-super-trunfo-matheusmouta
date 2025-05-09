#include <stdio.h>

// Este é o código de incialização do Desafio Super Trunfo em C.

int main(){
    printf("Desafio Super Trunfo!\n");

    // Criação Da Carta 1.
    // Declarando variáveis do Desafio Nível Novato e atribuindo os seus respectivos valores que estarão contidos nos dados da Carta 1.
    
    char estado1 = 'A';
    char codigo1[20] = "A01";
    char nomedacidade1[50] = "São_Paulo";
    int populacao1 =  12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;
    float quocientedensi1 = populacao1 / area1;  // Variável referente ao Desafio Nível Aventureiro.
    float quocientepib1 = pib1 / populacao1;     // Variável referente ao Desafio Nível Aventureiro.

    
    //Inserindo as funções printf e scanf para os dados da Carta 1.

    printf("Carta 1\nEstado: \n", estado1);
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

    printf("Quociente Densidade 1: \n");
    scanf("%f", &quocientedensi1);

    printf("Quociente Pib1: \n");
    scanf("%f", &quocientepib1);

    //Imprimindo os dados referentes à Carta 1.
    
    printf("Carta 1\nEstado: %c\n", estado1);
    
    printf("Código: %s\n", codigo1);
    
    printf("Nome da Cidade: %s\n", nomedacidade1);
    
    printf("População: %d\n", populacao1);
    
    printf("Área: %.2f Km²\n", area1);
    
    printf("PIB: %.2f bilhões de reais\n", pib1);
    
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("Densidade Populacional: %.2f hab/Km²\n", quocientedensi1);

    printf("PIB per Capita: %.2f reais\n", quocientepib1);



    // Criando a Carta 2.
    // Declarando variáveis do Desafio Nível Novato e atribuindo seus respectivos valores que estarão contidos nos dados da Carta 2.
    
    char estado2 = 'B';
    char codigo2[20] = "B02";
    char nomedacidade2[50] = "Rio_de_Janeiro";
    int populacao2 =  6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;
    float quocientedensi2 = populacao2 / area2;  // Variável referente ao Desafio Nível Aventureiro.
    float quocientepib2 = pib2 / populacao2;     // Variável referente ao Desafio Nível Aventureiro.

        
    // Inserindo as funções printf e scanf para Carta 2.
    
    printf("Carta 2\nEstado: B\n", estado2);
    scanf("%c", &estado2);
 
    printf("Código: \n", codigo2);
    scanf("%s", &codigo2);

    printf("Nome da Cidade: \n", nomedacidade2);
    scanf("%s", &nomedacidade2);

    printf("População: \n", populacao2);
    scanf("%d", &populacao2);

    printf("Área: \n", area2);
    scanf("%f", &area2);

    printf("PIB: \n", pib2);
    scanf("%f", &pib2);

    printf("Números de Pontos Turísticos: \n", pontos2);
    scanf("%d", &pontos2);

    printf("Quociente Densidade 2: \n");
    scanf("%f", &quocientedensi2);

    printf("Quociente Pib2: \n");
    scanf("%f", &quocientepib2);

    //Imprimindo os dados referentes à Carta 2.

    printf("Carta 2\nEstado: B%c\n", estado2);
    
    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", nomedacidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f Km²\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", pontos2);

    printf("Densidade Populacional: %.2f hab/Km²\n", quocientedensi2);

    printf("PIB per Capita: %.2f reais\n", quocientepib2);


    return 0;

}