#include <stdio.h>
    // Desafio Super Trunfo Países.
    // programador Vanessa.

int main() {
    printf("Desafio Super trunfos Países");

    // Declaração das variáveis para primeira carta.

    
    char estado1, cidade1[50], codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variantes para segunda carta.

    char estado2, cidade2[50], codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da primeira carta.
    printf("Cadastro da primeira carta:\n ");

    printf("Digite o estado (A-H) : ");
    scanf(" %c", &estado1);

    pritf(" Digite a cidade (01-04) ");
    scanf(" %[^\n]", cidade1);

    printf("Digite o código da carta (ex A01): "); // codigo da carta é a letra do estado de A-H somado do numero da cidade 01-04 (Ex: A01).
    scanf(" %s" , codigo1);

    printf("Digite a população da cidade : ");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade  (em  km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIBd da cidade (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos : ");
    scanf(" %d", &pontosTuristicos1);

    
     





    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
