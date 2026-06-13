#include <stdio.h>

int main() {
    // --- DECLARAÇÃO DE VARIÁVEIS ---

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned int populacao1;
    double area1;
    double pib1;
    int pontosTuristicos1;
    double densidadePopulacional1;
    double pibPerCapita1;
    double super_poder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned int populacao2;
    double area2;
    double pib2;
    int pontosTuristicos2;
    double densidadePopulacional2;
    double pibPerCapita2;
    double super_poder2;

    // --- CADASTRO DA CARTA 1 ---
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o Estado (Uma letra de A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Digite a Populacao: ");
    scanf("%u", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%lf", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%lf", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Limpa qualquer resíduo do buffer antes de ir para a próxima carta
    while (getchar() != '\n'); 

    printf("\n");

    // Cálculos da Carta 1
    if (area1 > 0)
        densidadePopulacional1 = populacao1 / area1;
    else
        densidadePopulacional1 = 0;

    if (populacao1 > 0)
        pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    else
        pibPerCapita1 = 0;

    if (densidadePopulacional1 > 0)
        super_poder1 = populacao1 + area1 + pib1 +
                       pontosTuristicos1 + pibPerCapita1 +
                       (1.0 / densidadePopulacional1);
    else
        super_poder1 = populacao1 + area1 + pib1 +
                       pontosTuristicos1 + pibPerCapita1;

    // --- CADASTRO DA CARTA 2 ---
    printf("=== Cadastro da Carta 2 ===\n");

    printf("Digite o Estado (Uma letra de A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Digite a Populacao: ");
    scanf("%u", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%lf", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%lf", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    
    while (getchar() != '\n');

    printf("\n");

    // Cálculos da Carta 2
    if (area2 > 0)
        densidadePopulacional2 = populacao2 / area2;
    else
        densidadePopulacional2 = 0;

    if (populacao2 > 0)
        pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    else
        pibPerCapita2 = 0;

    if (densidadePopulacional2 > 0)
        super_poder2 = populacao2 + area2 + pib2 +
                       pontosTuristicos2 + pibPerCapita2 +
                       (1.0 / densidadePopulacional2);
    else
        super_poder2 = populacao2 + area2 + pib2 +
                       pontosTuristicos2 + pibPerCapita2;

    // --- EXIBIÇÃO DOS DADOS ---
    printf("===============================\n");
    printf("     CARTAS CADASTRADAS\n");
    printf("===============================\n\n");

    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %u\n", populacao1);
    printf("Area: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita1);
    printf("Super Poder: %.2lf\n\n", super_poder1);

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %u\n", populacao2);
    printf("Area: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita2);
    printf("Super Poder: %.2lf\n\n", super_poder2);

    // --- COMPARAÇÃO ---
    printf("=====================================\n");
    printf("      COMPARACAO DE CARTAS\n");
    printf("=====================================\n");

    // População
    if (populacao1 > populacao2)
        printf("Populacao: Carta 1 venceu (%u x %u)\n", populacao1, populacao2);
    else if (populacao2 > populacao1)
        printf("Populacao: Carta 2 venceu (%u x %u)\n", populacao2, populacao1);
    else
        printf("Populacao: Empate (%u)\n", populacao1);

    // Área
    if (area1 > area2)
        printf("Area: Carta 1 venceu (%.2lf x %.2lf)\n", area1, area2);
    else if (area2 > area1)
        printf("Area: Carta 2 venceu (%.2lf x %.2lf)\n", area2, area1);
    else
        printf("Area: Empate (%.2lf)\n", area1);

    // PIB
    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu (%.2lf x %.2lf)\n", pib1, pib2);
    else if (pib2 > pib1)
        printf("PIB: Carta 2 venceu (%.2lf x %.2lf)\n", pib2, pib1);
    else
        printf("PIB: Empate (%.2lf)\n", pib1);

    // Pontos Turísticos
    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turisticos: Carta 1 venceu (%d x %d)\n",
               pontosTuristicos1, pontosTuristicos2);
    else if (pontosTuristicos2 > pontosTuristicos1)
        printf("Pontos Turisticos: Carta 2 venceu (%d x %d)\n",
               pontosTuristicos2, pontosTuristicos1);
    else
        printf("Pontos Turisticos: Empate (%d)\n", pontosTuristicos1);

    // Densidade (MENOR vence)
    if (densidadePopulacional1 < densidadePopulacional2)
        printf("Densidade Populacional: Carta 1 venceu (%.2lf x %.2lf)\n",
               densidadePopulacional1, densidadePopulacional2);
    else if (densidadePopulacional2 < densidadePopulacional1)
        printf("Densidade Populacional: Carta 2 venceu (%.2lf x %.2lf)\n",
               densidadePopulacional2, densidadePopulacional1);
    else
        printf("Densidade Populacional: Empate (%.2lf)\n",
               densidadePopulacional1);

    // PIB per Capita
    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 venceu (%.2lf x %.2lf)\n",
               pibPerCapita1, pibPerCapita2);
    else if (pibPerCapita2 > pibPerCapita1)
        printf("PIB per Capita: Carta 2 venceu (%.2lf x %.2lf)\n",
               pibPerCapita2, pibPerCapita1);
    else
        printf("PIB per Capita: Empate (%.2lf)\n", pibPerCapita1);

    // Super Poder
    if (super_poder1 > super_poder2)
        printf("Super Poder: Carta 1 venceu (%.2lf x %.2lf)\n",
               super_poder1, super_poder2);
    else if (super_poder2 > super_poder1)
        printf("Super Poder: Carta 2 venceu (%.2lf x %.2lf)\n",
               super_poder2, super_poder1);
    else
        printf("Super Poder: Empate (%.2lf)\n", super_poder1);

    return 0;
}