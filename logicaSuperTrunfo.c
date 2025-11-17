#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado[3];
    char codigoCarta[6];
    char nomeCity[30];
    unsigned long int populacao;
    float areaKm;
    float pib;
    int numeroPontosTuristicos;

    // Declaração de variáveis para a Carta 2
    char estado2[3];
    char codigoCarta2[6];
    char nomeCity2[30];
    unsigned long int populacao2;
    float areaKm2;
    float pib2;
    int numeroPontosTuristicos2;

    // cálculos intermediários
    float pibPerCapita, densidadePopulacional;
    float pibPerCapita2, densidadePopulacional2;

    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Digite a sigla do estado: ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = 0;

    printf("Digite o código da carta: ");
    scanf("%5s", codigoCarta);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomeCity, sizeof(nomeCity), stdin);
    nomeCity[strcspn(nomeCity, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%lu", &populacao);

    printf("Digite a área (km²): ");
    scanf("%f", &areaKm);

    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%i", &numeroPontosTuristicos);
    getchar();

    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite a sigla do estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta2);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomeCity2, sizeof(nomeCity2), stdin);
    nomeCity2[strcspn(nomeCity2, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &areaKm2);

    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%i", &numeroPontosTuristicos2);

    // Calcular densidade populacional e PIB per capita
    densidadePopulacional = (float)populacao / areaKm;
    pibPerCapita = (pib * 1000000000.0) / populacao;

    densidadePopulacional2 = (float)populacao2 / areaKm2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // Calcular Super Poder para cada carta (inverso da densidade)
    float superPoder = populacao + areaKm + pib + numeroPontosTuristicos + pibPerCapita + (1.0f / densidadePopulacional);
    float superPoder2 = populacao2 + areaKm2 + pib2 + numeroPontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    printf("\n=== CARTAS CADASTRADAS ===\n");


    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCity);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", areaKm);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %i\n", numeroPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);


    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCity2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", numeroPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    // Exibir resultados só com 1 ou 0
    printf("\nComparação de Cartas: (População)\n"); 

    // mostrando cartas
    printf("Carta 1 - %s (%s) População: %lu\n", nomeCity, estado, populacao);
    printf("Carta 2 - %s (%s) População: %lu\n", nomeCity2, estado2, populacao2);
    if (populacao > populacao2){
        printf("Carta 1 Venceu-  %s  População: %lu\n", nomeCity, populacao);
    }else if (populacao2 > populacao){
        printf("Carta 2 Venceu- %s População: %lu\n", nomeCity2, populacao2);
    }else{
        printf("empate\n");
    }

    /*
    printf("Área: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPib);
    printf("Pontos Turísticos: %d\n", resultadoPontosTuristicos);
    printf("Densidade Populacional: %d\n", resultadoDensidadePopulacional);
    printf("PIB per Capita: %d\n", resultadoPibPerCapita);
    printf("Super Poder: %d\n", resultadoSuperPoder);
    */

    return 0;
}