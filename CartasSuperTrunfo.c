#include <stdio.h>
#include <string.h>

int main() {
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2;

    
    printf("************\n");
    printf("SUPER TRUNFO\n");
    printf("************\n");
    
    // Cadastrando a primeira carta
    printf("Digite o nome de um Estado? ");
    fgets(cidade1, 49, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
    
    printf("Qual a populacao? ");
    scanf("%lu", &populacao1); // %lu para unsigned long int
    
    printf("Qual a area do Estado? ");
    scanf("%f", &area1);

    printf("Qual o PIB? ");
    scanf("%f", &pib1);
    
    printf("Qual o numero de pontos turisticos do Estado? ");
    scanf("%d", &pontosturisticos1);
    getchar();
    
    
    // Cadastrando a segunda carta
    printf("Digite o nome de um Estado? ");
    fgets(cidade2, 49, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    
    printf("Qual a populacao? ");
    scanf("%lu", &populacao2);
    
    printf("Qual a area do Estado? ");
    scanf("%f", &area2);
    
    printf("Qual o PIB? ");
    scanf("%f", &pib2);
    
    printf("Qual o numero de pontos turisticos do Estado? ");
    scanf("%d", &pontosturisticos2);


    // Armazenando a densidade populacional e o PIB per Capita
    densidadepopulacional1 = populacao1 / area1;
    densidadepopulacional2 = populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1; // Já que o pib está em bilhões, multiplica por bilhão
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;

    // Calculo do Super Poder
    float superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1/densidadepopulacional1);
    float superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1/densidadepopulacional2);
    
    //Imprimindo a primeira carta
    printf("\n");
    printf("Primeira carta cadastrada\n");
    printf("-------------------------\n");
    
    printf("Carta 1\n");
    printf("Estado A\n");
    printf("Codigo: A01\n");
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);

    // Imprimindo a segunda carta
    printf("\n");
    printf("Segunda carta cadastrada\n");
    printf("-------------------------\n");

    printf("Carta 2\n");
    printf("Estado B\n");
    printf("Codigo: B02\n");
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);

    // Comparando as cartas
    printf("\n");
    printf("======================\n");
    printf("COMPARACAO DAS CARTAS\n");
    printf("======================\n");
    printf("Populacao: %s venceu\n", (populacao1 > populacao2) ? cidade1 : cidade2);
    printf("Area: %s venceu\n", (area1 > area2) ? cidade1 : cidade2);
    printf("PIB: %s venceu\n", (pib1 > pib2) ? cidade1 : cidade2);
    printf("Pontos Turisticos: %s venceu\n", (pontosturisticos1 > pontosturisticos2) ? cidade1 : cidade2);
    printf("Densidade Populacional: %s venceu\n", (densidadepopulacional1 < densidadepopulacional2) ? cidade1 : cidade2);
    printf("PIB per Capita: %s venceu\n", (pibpercapita1 > pibpercapita2) ? cidade1 : cidade2);
    printf("Super Poder: %s venceu\n", (superpoder1 > superpoder2) ? cidade1 : cidade2);

    return 0;
}
