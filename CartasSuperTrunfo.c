#include <stdio.h>

int main() {
    char estado;
    char codigo[3];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int turisticos;

    printf("Carta 1: \n");

    printf("Digite o estado: (uma letra de A á H): \n");
    scanf("%c", &estado);

    printf("Digite o código da carta: (ex: A01,B02): \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &estado);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turisticos);

    char Estado;
    char Codigo[3];
    char Cidade[20];
    int Populacao;
    float Area;
    float Pib;
    int Turisticos;

    printf("Carta 2: \n");

    printf("Digite o estado: (uma letra de A á H): \n");
    scanf("%c", &Estado);

    printf("Digite o código da carta: (ex: A01,B02): \n");
    scanf("%s", &Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &Estado);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &Turisticos);

    return 0;

}
