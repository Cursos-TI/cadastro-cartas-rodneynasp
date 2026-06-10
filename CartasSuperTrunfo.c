#include <stdio.h>

int main() {
    // --- DECLARAÇÃO DE VARIÁVEIS ---
    
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4]; // 3 caracteres + o terminador '\0' (ex: "A01")
    char cidade1[50]; // Suporta nomes de cidades com até 49 caracteres
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1; // Variável para calcular a densidade populacional da Carta 1
    float pibPerCapita1; // Variável para calcular o PIB per capita da Carta 1

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2; // Variável para calcular a densidade populacional da Carta 2
    float pibPerCapita2; // Variável para calcular o PIB per capita da Carta 2

    // --- CADASTRO DA CARTA 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Digite a letra do Estado (A-H): ");
    // O espaço antes de %c serve para ignorar quebras de linha anteriores no buffer
    scanf(" %c", &estado1); 
    
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o Nome da Cidade: ");
    // Lê strings com espaços (como "São Paulo"). O %[^\n] lê até o usuário apertar Enter.
    scanf(" %[^\n]", cidade1); 
    
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // Cálculo da densidade populacional da Carta 1
    densidadePopulacional1 = populacao1 / area1;
    //printf("Densidade Populacional da Carta 1: %.2f habitantes/km²\n", densidadePopulacional1);
    // Cálculo do PIB per capita da Carta 1
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo o PIB de bilhões para reais antes de dividir pela população
    //printf("PIB per Capita da Carta 1: %.2f reais\n", pibPerCapita1);


    // --- CADASTRO DA CARTA 2 ---
    printf("=== Cadastro da Carta 2 ===\n");
    
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Cálculo da densidade populacional da Carta 2
    densidadePopulacional2 = populacao2 / area2;
    //printf("Densidade Populacional da Carta 2: %.2f habitantes/km²\n", densidadePopulacional2);
    // Cálculo do PIB per capita da Carta 2
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Convertendo o PIB de bilhões para reais antes de dividir pela população
    //printf("PIB per Capita da Carta 2: %.2f reais\n", pibPerCapita2);


    // --- EXIBIÇÃO DOS DADOS ---
    printf("===============================\n");
    printf("     CARTAS CADASTRADAS        \n");
    printf("===============================\n\n");

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // %.2f limita a exibição a duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    // Cálculo da densidade populacional da Carta 1
    //densidadePopulacional1 = populacao1 / area1;
    printf("Densidade Populacional da Carta 1: %.2f habitantes/km²\n", densidadePopulacional1);
    // Cálculo do PIB per capita da Carta 1
    //pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo o PIB de bilhões para reais antes de dividir pela população
    printf("PIB per Capita da Carta 1: %.2f reais\n", pibPerCapita1);   
    printf("\n");

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


    // Cálculo da densidade populacional da Carta 2
    //densidadePopulacional2 = populacao2 / area2;
    printf("Densidade Populacional da Carta 2: %.2f habitantes/km²\n", densidadePopulacional2);
    // Cálculo do PIB per capita da Carta 2
    //pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Convertendo o PIB de bilhões para reais antes de dividir pela população
    printf("PIB per Capita da Carta 2: %.2f reais\n", pibPerCapita2);

    



    return 0;
}