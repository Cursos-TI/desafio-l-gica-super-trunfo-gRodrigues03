#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


    // Declaração de variáveis de ambas as cartas
    char estado1;
    char cod_carta1[3];
    char nome_cidade1[40];
    int populacao1;
    float area1;
    float densidade_populacional1;
    float pib1;
    float pib_per_capita1;
    int qtd_pontos_turisticos1;
    float super_poder1;
    int pontos1=0;

    char estado2;
    char cod_carta2[3];
    char nome_cidade2[40];
    int populacao2;
    float area2;
    float densidade_populacional2;
    float pib2;
    float pib_per_capita2;
    int qtd_pontos_turisticos2;
    float super_poder2;
    int pontos2=0;

    // Solicitar valores da carta 1 ao usuário e assosciá-los às variáveis adequadas
    printf("// Insira os dados da carta 1\n");

    printf("Digite o estado da carta 1: ");
    scanf("%c", &estado1);

    printf("Digite o código da carta 1: ");
    scanf("%s", cod_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km² (somente números, ex.: 75.6): ");
    scanf("%f", &area1);

    densidade_populacional1 = (populacao1/area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    pib_per_capita1 = (pib1/populacao1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos1);

    super_poder1 = (populacao1 + area1 + densidade_populacional1 + pib1 + pib_per_capita1 + qtd_pontos_turisticos1);


    // Por algum motivo, o \n era guardado entre um scanf e outro
    // me custou horas de vida.
    getchar();


    // Solicitar valores da carta 2 ao usuário e também assosciá-los às variáveis adequadas
    printf("// Insira os dados da carta 2\n");

    printf("Digite o estado da carta 2: ");
    scanf("%c", &estado2);

    printf("Digite o código da carta 2: ");
    scanf("%s", cod_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km² (somente números, ex.: 75.6): ");
    scanf("%f", &area2);

    densidade_populacional2 = (populacao2/area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    pib_per_capita2 = (pib2/populacao2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos2);

    super_poder2 = (populacao2 + area2 + densidade_populacional2 + pib2 + pib_per_capita2 + qtd_pontos_turisticos2);


    // Código comentado apenas para fins de debug!

    // estado1 = 'C';
    // strcpy(cod_carta1, "03");
    // strcpy(nome_cidade1, "Piraporinha do Norte");

    // populacao1 = 1000;
    // area1 = 1000;
    // pib1 = 1000;
    // qtd_pontos_turisticos1 = 10;

    // densidade_populacional1 = (populacao1/area1);

    // pib_per_capita1 = (pib1/populacao1);

    // super_poder1 = (populacao1 + area1 + densidade_populacional1 + pib1 + pib_per_capita1 + qtd_pontos_turisticos1);

    //////////////////////////////////////////////////////////////////////

    // estado2 = 'C';
    // strcpy(cod_carta2, "03");
    // strcpy(nome_cidade2, "Piraporinha do Sul");

    // populacao2 = 2000;
    // area2 = 2000;
    // pib2 = 2000;
    // qtd_pontos_turisticos2 = 20;

    // densidade_populacional2 = (populacao2/area2);

    // pib_per_capita2 = (pib2/populacao2);

    // super_poder2 = (populacao2 + area2 + densidade_populacional2 + pib2 + pib_per_capita2 + qtd_pontos_turisticos2);

    ///////////////////////////////////////


    // Separação visual entre entrada e saída de dados no terminal
    printf("\n////////////////////////////////////////////////////////////////////////\n\n");
    printf("- - - DADOS INSERIDOS - - -");
    printf("\n////////////////////////////////////////////////////////////////////////\n\n");
    printf("Dados da carta 1:\n");
    // Mostrar os dados da primeira carta inserida
    printf("- Estado: %c\n", estado1);

    printf("- Código da carta: %c%s\n", estado1, cod_carta1);

    printf("- Nome da cidade: %s\n", nome_cidade1);

    printf("- População: %d\n", populacao1);

    printf("- Área: %.2f km²\n", area1);

    printf("- Densidade Populacional: %.2f/km²\n", densidade_populacional1);

    printf("- PIB: %.2f\n", pib1);

    printf("- PIB per capita: %.2f\n", pib_per_capita1);

    printf("- Número de pontos turísticos: %d\n", qtd_pontos_turisticos1);

    printf("- Super poder: %f\n", super_poder1);

    printf("\n////////////////////////////////////////////////////////////////////////\n\n");

    // Mostrar os dados da segunda carta "inserida"
    printf("Dados da carta 2:\n");
    printf("- Estado: %c\n", estado2);

    printf("- Código da carta: %c%s\n", estado2, cod_carta2);

    printf("- Nome da cidade: %s\n", nome_cidade2);

    printf("- População: %d\n", populacao2);

    printf("- Área: %.2f km²\n", area2);

    printf("- Densidade Populacional: %.2f/km²\n", densidade_populacional2);

    printf("- PIB: %.2f\n", pib2);

    printf("- PIB per capita: %.2f\n", pib_per_capita2);

    printf("- Número de pontos turísticos: %d\n", qtd_pontos_turisticos2);

    printf("- Super poder: %f\n", super_poder2);

    printf("\n///------------------------------------------------///\n\n");
    printf("Contagem de pontos:\n");

    // Cálculo de pontos das cartas:
    printf("População da carta ");
    if (populacao1 > populacao2){
        pontos1++;
        printf("1 venceu!\n");
    } else {
        pontos2++;
        printf("2 venceu!\n");
    }

    printf("Área da carta ");
    if (area1 > area2){
        pontos1++;
        printf("1 venceu!\n");
    } else {
        pontos2++;
        printf("2 venceu!\n");
    }

    printf("PIB da carta ");
    if (pib1 > pib2){
        pontos1++;
        printf("1 venceu!\n");
    } else {
        pontos2++;
        printf("2 venceu!\n");
    }

    printf("Quantidade de pontos turísticos da carta ");
    if (qtd_pontos_turisticos1 > qtd_pontos_turisticos2){
        pontos1++;
        printf("1 venceu!\n");
    } else {
        pontos2++;
        printf("2 venceu!\n");
    }

    printf("Densidade populacional da carta ");
    if (densidade_populacional1 < densidade_populacional2){
        pontos1++;
        printf("1 venceu!\n");
    } else {
        pontos2++;
        printf("2 venceu!\n");
    }

    printf("PIB per capita da carta ");
    if (pib_per_capita1 > pib_per_capita2){
        pontos1++;
        printf("1 venceu!\n");
    } else {
        pontos2++;
        printf("2 venceu!\n");
    }

    printf("Super poder da carta ");
    if (super_poder1 > super_poder2){
        pontos1++;
        printf("1 venceu!\n");
    } else {
        pontos2++;
        printf("2 venceu!\n");
    }

    printf("\n~/~------------------------~/~\n\n");

    printf("Carta 1: %d  ||  Carta 2: %d\n", pontos1, pontos2);

    if (pontos1 > pontos2){
        printf("A carta 1 venceu!\n");
    } else {
        printf("A carta 2 venceu!\n");
    }



    return 0;
}
