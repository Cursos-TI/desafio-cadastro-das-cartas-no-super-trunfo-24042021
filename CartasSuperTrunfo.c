#include <stdio.h>

// Definição da estrutura para armazenar os dados de cada carta
struct Carta {
    char estado[2];
    char codigo[4];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int ponto;
    float densidade;
    float pibpercapita;
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1;
    struct Carta carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");

    printf("Digite uma letra de 'A' a 'H' representando o estado: ");
    scanf("%s", carta1.estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", carta1.cidade);

    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area (em km2): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.ponto);

    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibpercapita = (carta1.pib * 1000000000) / carta1.populacao;

    printf("\n");

    // Cadastro da segunda carta
    printf("Cadastro da segunda carta:\n");

    printf("Digite uma letra de 'A' a 'H' representando o estado: ");
    scanf("%s", carta2.estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", carta2.cidade);

    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area (em km2): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.ponto);

    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibpercapita = (carta2.pib * 1000000000) / carta2.populacao;

    printf("\n");

    // Exibição dos dados da primeira carta
    printf("Dados da primeira carta:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.ponto);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.2f reais\n", carta1.pibpercapita);

    printf("\n");

    // Exibição dos dados da segunda carta
    printf("Dados da segunda carta:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.ponto);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.2f reais\n", carta2.pibpercapita);

    return 0;
}
