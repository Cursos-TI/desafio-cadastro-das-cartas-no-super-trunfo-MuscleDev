#include <stdio.h>

int main() {
    char estado1 [10], estado2 [10];
    char codigo1 [20], codigo2 [20];
    char cidade1 [30], cidade2 [30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float densidadep1, densidadep2;
    float percapita1, percapita2;
    float superpoder1, superpoder2;
    int opcao;


// Aqui foi realizada a declaração de variáveis sempre utilizando a tipo correto e nome significativo para cada variavel.
    printf("Bem-vindo ao Desafio Super Trunfo!\n");
    printf("As cartas serão divididas por estados, cada um com quatro cidades.\nImagine um país dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4).\nA combinação forma o código da carta (ex: A01, B02).\n");
    printf("Você deverá cadastrar sua carta colocando informações sobre a cidade escolhida!\n");
// Aqui utilizei a função printf para exibir no terminal instruções do funcionamento do jogo antes do usuário começar a cadastrar suas cartas.

    printf("Qual estado da cidade 1? \n");
    scanf("%s", estado1);
    printf("Qual o código da carta 1? \n");
    scanf("%s", codigo1);
    printf("Qual o nome da cidade 1? \n");
    scanf("%s", cidade1);
    printf("Qual a população da cidade 1? \n");
    scanf("%lu", &populacao1);
    printf("Qual a área da cidade 1? \n");
    scanf("%f", &area1);
    printf("Qual o PIB da cidade 1? \n");
    scanf("%f", &pib1);
    printf("Quantos pontos turísticos existem na cidade 1? \n");
    scanf("%d", &turisticos1);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Qual o estado da cidade 2? \n");
    scanf("%s", estado2);
    printf("Qual o código da carta 2? \n");
    scanf("%s", codigo2);
    printf("Qual o nome da cidade 2? \n");
    scanf("%s", cidade2);
    printf("Qual a população da cidade 2? \n");
    scanf("%lu", &populacao2);
    printf("Qual a área da cidade 2? \n");
    scanf("%f", &area2);
    printf("Qual o PIB da cidade 2? \n");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos existem na cidade 2? \n");
    scanf("%d", &turisticos2);
// Aqui foi montado uma serie de questões feitas ao usuário utilizando da função printf e para coletar a resposta foi utilizada a função scanf atentando ao tipo de variavel a ser solicitada.


    densidadep1= populacao1/area1;
    percapita1 = pib1/populacao1;
    densidadep2 = populacao2/area2;
    percapita2 = pib2/populacao2;
    superpoder1 = populacao1+area1+pib1+turisticos1+(1/ densidadep1)+percapita1;
    superpoder2 = populacao2+area2+pib2+turisticos2+(1/ densidadep2)+percapita2;

// Foram adicionadas as variaveis "densidade populacional" e "PIB per capita" e a forma como devem ser calculculados usando as variaveis fornecidas pelo usuário.
    
    printf("Cartas cadastradas:\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu de habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f mil reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turisticos1);
    printf("Densidade populacional: %.2f hab./km²\n", densidadep1);
    printf("PIB per capita: %.3f mil reais\n", percapita1);
    printf("SUPER PODER: %.2f",superpoder1 );
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu de habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.3f mil reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);
    printf("Densidade populacional: %.2f hab./km²\n", densidadep2);
    printf("PIB per capita: %.2f mil reais\n", percapita2);
    printf("SUPER PODER: %.2f",superpoder2 );

    //Por fim foi ultilizada a função printf para mostrar no terminal os dados inseridos pelo usuário e exibidos de forma organizada um em cada linha.
    printf("\n\n\n");
    printf("Agora que você já cadastrou as cartas, escolha qual atributo irá comparar:\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Número de pontos turísticos\n");
    printf("5- Densidade demográfica\n");
    printf("6- PIB per capita\n");
    printf("7- Super poder\n");
    printf("Qual número referente ao atríbuto você escolhe? ");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        printf("Carta 1: Código:\n %s\n Nome da cidade: %s\n População: %lu habitantes\n", codigo1, cidade1, populacao1);
        printf("Carta 2: Código:\n %s\n Nome da cidade: %s\n População: %lu habitantes\n", codigo2, cidade2, populacao2);
             if (populacao1>populacao2) {
        printf("População: Carta 1 venceu!\n");
    }else if (populacao1==populacao2)
    {
        printf("Empate!");
    }else
     {
        printf("População: Carta 2 venceu!\n");
    }
        break;
    case 2:
        printf("Carta 1:\n Código: %s\n Nome da cidade: %s\n Área: %.2f km²\n", codigo1, cidade1, area1);
        printf("Carta 2:\n Código: %s\n Nome da cidade: %s\n Área: %.2f km²\n", codigo2, cidade2, area2);
            if (area1>area2) {
        printf("Área: Carta 1 venceu!\n");
    }else if (area1==area2)
    {
        printf("Empate!");
    }else{
        printf("Área: Carta 2 venceu!\n");
    }
        break;
    case 3:
        printf("Carta 1: Código: %s\n Nome da cidade: %s\n PIB: %.2f mil reais\n", codigo1, cidade1, pib1);
        printf("Carta 2: Código: %s\n Nome da cidade: %s\n PIB: %.2f mil reais\n", codigo2, cidade2, pib2);
            if (pib1>pib2) {
        printf("PIB: Carta 1 venceu!\n");
    }else if (pib1==pib2)
    {
        printf("Empate!");
    }else{
        printf("PIB: Carta 2 venceu!\n");
    }
        break;
    case 4:
        printf("Carta 1: Código: %s\n Nome da cidade: %s\n Pontos Turísticos: %d\n", codigo1, cidade1, turisticos1);
        printf("Carta 2: Código: %s\n Nome da cidade: %s\n Pontos Turísticos: %d\n", codigo2, cidade2, turisticos2);
            if (turisticos1>turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu!\n");
    }else if (turisticos1==turisticos2)
    {
        printf("Empate!");
    }else{
        printf("Pontos Turísticos: Carta 2 venceu!\n");
    }
        break;
    case 5:
        printf("Carta 1: Código: %s\n Nome da cidade: %s\n Densidade populacional: %.2f\n", codigo1, cidade1, densidadep1);
        printf("Carta 2: Código: %s\n Nome da cidade: %s\n Densidade populacional: %.2f\n", codigo2, cidade2, densidadep2);
            if (densidadep1<densidadep2) {
        printf("Densidade populacional: Carta 1 venceu!\n");
    }else if (densidadep1==densidadep2)
    {
        printf("Empate!");
    }else {
        printf("Densidade populacional: Carta 2 venceu!\n");
    }
        break;
    case 6:
        printf("Carta 1: Código: %s\n Nome da cidade: %s\n PIB per capita: %.3f\n", codigo1, cidade1, percapita1);
        printf("Carta 2: Código: %s\n Nome da cidade: %s\n PIB per capita: %.3f\n", codigo2, cidade2, percapita2);
            if (percapita1>percapita2) {
        printf("PIB per capita: Carta 1 venceu!\n");
    }else if (percapita1==percapita2)
    {
        printf("Empate!");
    }else {
        printf("PIB per capita: Carta 2 venceu!\n");
    }
        break;
    case 7:
        printf("Carta 1: Código: %s\n Nome da cidade: %s\n SUPER PODER: %.2f\n", codigo1, cidade1, superpoder1);
        printf("Carta 2: Código: %s\n Nome da cidade: %s\n SUPER PODER: %.2f\n", codigo2, cidade2, superpoder2);
            if (superpoder1>superpoder2) {
        printf("SUPER PODER: Carta 1 venceu!\n");
    }else if (superpoder1==superpoder2)
    {
        printf("Empate!");
    }else {
        printf("SUPER PODER: Carta 2 venceu!\n");
    }
        break;
    
    default:
    printf("Opção invalida!");
        break;
    }

// Utilizando do condicional if e else exibiu-se no terminal qual carta venceu na disputa em cada atributo.

    return 0;
}
/* INFORMAÇÕES PARA O TESTE
Qual estado da cidade 1? RS
Qual o código da carta 1? RS1
Qual o nome da cidade 1? POA
Qual a população da cidade 1? 1332570
Qual a área da cidade 1? 495.39
Qual o PIB da cidade 1? 76074563.08
Quantos pontos turísticos existem na cidade 1? 40

Estado: SC
Código: SC1
Nome da cidade 2: FLORIPA
População: 537211
Área: 674.84
PIB: 21312446.73
Número de pontos turísticos: 100
*/