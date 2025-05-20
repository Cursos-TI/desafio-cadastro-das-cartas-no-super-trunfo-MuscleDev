#include <stdio.h>

int main() {
    char estado;
    char codigo [20];
    char cidade [30];
    int populacao;
    float area;
    float pib;
    int turisticos;

    printf("Bem-vindo ao Desafio Super Trunfo!\n");
    printf("As cartas serão divididas por estados, cada um com quatro cidades.\nImagine um país dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4).\nA combinação forma o código da carta (ex: A01, B02).\n");
    printf("Você deverá cadastrar sua carta colocando informações sobre a cidade escolhida!\n");
// Aqui utilizei a função printf para exibir no terminal instruções do funcionamento do jogo antes do usuário começar a cadastrar suas cartas.

    printf("Qual estado da cidade? "\n);
    scanf("%c", estado);
    printf("Qual o código da carta?")
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
