#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1 [20], codigo2 [20];
    char cidade1 [30], cidade2 [30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
// Aqui foi realizada a declaração de variáveis sempre utilizando a tipo correto e nome significativo para cada variavel.
    printf("Bem-vindo ao Desafio Super Trunfo!\n");
    printf("As cartas serão divididas por estados, cada um com quatro cidades.\nImagine um país dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4).\nA combinação forma o código da carta (ex: A01, B02).\n");
    printf("Você deverá cadastrar sua carta colocando informações sobre a cidade escolhida!\n");
// Aqui utilizei a função printf para exibir no terminal instruções do funcionamento do jogo antes do usuário começar a cadastrar suas cartas.

    printf("Qual estado da cidade? \n");
    scanf("%c", &estado1);
    printf("Qual o código da carta? \n");
    scanf("%s", codigo1);
    printf("Qual o nome da cidade? \n");
    scanf("%s", cidade1);
    printf("Qual a população da cidade? \n");
    scanf("%d", &populacao1);
    printf("Qual a área da cidade? \n");
    scanf("%f", &area1);
    printf("Qual o PIB per capita da cidade? \n");
    scanf("%f", &pib1);
    printf("Quantos pontos turísticos existem na cidade? \n");
    scanf("%d", &turisticos1);

    printf("Qual estado da cidade? \n");
    scanf("%c", &estado2);
    printf("Qual o código da carta? \n");
    scanf("%s", codigo2);
    printf("Qual o nome da cidade? \n");
    scanf("%s", cidade2);
    printf("Qual a população da cidade? \n");
    scanf("%d", &populacao2);
    printf("Qual a área da cidade? \n");
    scanf("%f", &area2);
    printf("Qual o PIB per capita da cidade? \n");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos existem na cidade? \n");
    scanf("%d", &turisticos2);
// Aqui foi montado uma serie de questões feitas ao usuário utilizando da função printf e para coletar a resposta foi utilizada a função scanf
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB per capita: %.2f mil reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turisticos1);
    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB per capita: %.2f mil reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);

    return 0;
}
