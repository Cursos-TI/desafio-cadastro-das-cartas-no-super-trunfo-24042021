#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[2];
    char codigo[4];
    char cidade[40];
    unsigned long int populacao;
    float area;
    float pib;
    int ponto;
    float densidade;
    float pibPerCapita;
    float superPoder;
};

int main() {
    struct Carta carta1;
    struct Carta carta2;

    // Entrada dos dados da carta 1
    printf("Cadastro da primeira carta:\n");

    printf("Digite uma letra de 'A' a 'H' representando o estado: ");
    scanf("%s", carta1.estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    getchar(); // limpa \n
    printf("Digite o nome da cidade: ");
    fgets(carta1.cidade, sizeof(carta1.cidade), stdin);
    carta1.cidade[strcspn(carta1.cidade, "\n")] = '\0';

    printf("Digite a populacao: ");
    scanf("%lu", &carta1.populacao);

    printf("Digite a area (em km2): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.ponto);

    // Cálculos carta 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;
    carta1.superPoder = (float)carta1.populacao +
                        carta1.area +
                        carta1.pib +
                        carta1.ponto +
                        carta1.pibPerCapita +
                        (1.0 / carta1.densidade);

    // Entrada dos dados da carta 2
    printf("\nCadastro da segunda carta:\n");

    printf("Digite uma letra de 'A' a 'H' representando o estado: ");
    scanf("%s", carta2.estado);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    getchar(); // limpa \n
    printf("Digite o nome da cidade: ");
    fgets(carta2.cidade, sizeof(carta2.cidade), stdin);
    carta2.cidade[strcspn(carta2.cidade, "\n")] = '\0';

    printf("Digite a populacao: ");
    scanf("%lu", &carta2.populacao);

    printf("Digite a area (em km2): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.ponto);

    // Cálculos carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;
    carta2.superPoder = (float)carta2.populacao +
                        carta2.area +
                        carta2.pib +
                        carta2.ponto +
                        carta2.pibPerCapita +
                        (1.0 / carta2.densidade);

    // Exibição dos dados
    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.ponto);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.ponto);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    // Comparações
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.ponto > carta2.ponto);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.densidade < carta2.densidade); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pibPerCapita > carta2.pibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.superPoder > carta2.superPoder);

    return 0;
}
