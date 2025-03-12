#include <stdio.h>
// Desafio Super Trunfo Países.
// programador Vanessa.

int main()
{
    printf("Desafio  Países\n");

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
    printf(" \nCadastro da primeira carta:\n ");

    printf(" Digite o estado (A-H) : \n ");
    scanf(" %c", &estado1);

    printf(" Digite a cidade (01-04) : \n ");
    scanf("%s", cidade1);

    printf(" Digite o código da carta (ex A01): \n "); // O código da carta é formado pela letra referente ao estado e o número da cidade
    scanf("%s", codigo1);

    printf(" Digite a população da cidade : \n ");
    scanf("%d", &populacao1);

    printf(" Digite a área da cidade (em km²): \n ");
    scanf("%f", &area1);

    printf(" Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos : \n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da segunda carta.
    printf(" \nCadastro da segunda carta : \n");

    printf(" Digite o Estado (A-H): \n ");
    scanf(" %c", &estado2);

    printf(" Digite a cidade (01-04): \n");
    scanf("%s", cidade2);

    printf(" Digite o código da carta (ex B02): \n"); // O código da carta é formado pela letra referent ao estado e o numero da cidade
    scanf("%s", codigo2);

    printf(" Digite a população da cidade2 : \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em Km²): \n");
    scanf("%f", &area2);

    printf(" Digite o PIB da cidade : \n");
    scanf("%f", &pib2);

    printf(" Digite os pontos Turísticos : \n");
    scanf("%d", &pontosTuristicos2);

    //Exibição dos dados cadastrados
    printf("\nCarta1:\n");
    printf("Estado : %c\n", estado1);
    printf("Cidade : %d\n", cidade1);
    printf("Código : %s\n", codigo1);
    printf("População : %d\n", populacao1);
    printf("Área : %.2f km²\n", area1);
    printf("PIB : %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos : %d\n", pontosTuristicos1);
    
    printf("\nCarta2:\n");
    printf("Estado : %c\n", estado2);
    printf("Cidade : %d\n", cidade2);
    printf("Código : %s\n", codigo2);
    printf("População : %d\n",populacao2);
    printf("Área : %.2f km²\n, area2 ");
    printf("PIB : %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos : %dn", pontosTuristicos2);


        

        return 0;
}
