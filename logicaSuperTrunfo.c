#include <stdio.h>
#include <string.h>

// desafio aventureiro.

int main() {
    // variavel para armazenar qual atributo vai comparar.
    int opcao;

    // Declaração de variáveis para a Carta 1
    char nomePais[30];
    unsigned long int populacao;
    float areaKm;
    float pib;
    int numeroPontosTuristicos;

    // Declaração de variáveis para a Carta 2
    char nomePais2[30];
    unsigned long int populacao2;
    float areaKm2;
    float pib2;
    int numeroPontosTuristicos2;

    // cálculos intermediários
    float pibPerCapita, densidadePopulacional;
    float pibPerCapita2, densidadePopulacional2;

    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Digite o nome do Pais: ");
    fgets(nomePais, sizeof(nomePais), stdin);
    nomePais[strcspn(nomePais, "\n")] = 0;

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

    printf("Digite o nome do Pais: ");
    fgets(nomePais2, sizeof(nomePais2), stdin);
    nomePais2[strcspn(nomePais2, "\n")] = 0;

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
    
    printf("\n=== CARTAS CADASTRADAS ===\n");


    printf("\nCarta 1:\n");
    printf("Nome do País: %s\n", nomePais);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", areaKm);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %i\n", numeroPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);


    printf("\nCarta 2:\n");
    printf("Nome do País: %s\n", nomePais2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", numeroPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    printf("\n----- Escolha qual você atributo, você quer comparar -----\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - pib\n");
    printf("4 - Número de pontos turisticos\n");
    printf("5 - densidade populacional\n");
    printf("Digite o numero que voce quer comparar [1, 5]:");
    scanf("%i", &opcao);

    printf("\n---- Comparando ----\n");
    switch (opcao){
    case 1:
        if (populacao == populacao2){
            printf("empate\n");
        }else if (populacao > populacao2){
            printf("\nCarta - 1 Nome do Pais: %s\n", nomePais);
            printf("Carta - 2 Nome do Pais: %s\n", nomePais2);
            printf("\nAtributo escolhido foi [População]\n");
            printf("Carta - 1 População:%lu\n", populacao);
            printf("Carta - 2 População:%lu\n", populacao2);
            printf("Carta - 1 acabou vencendo!");
        }else{
            printf("\nCarta - 1 Nome do Pais: %s\n", nomePais);
            printf("Carta - 2 Nome do Pais: %s\n", nomePais2);
            printf("\nAtributo escolhido foi [População]\n");
            printf("Carta - 1 População:%lu\n", populacao);
            printf("Carta - 2 População:%lu\n", populacao2);
            printf("Carta - 2 acabou vencendo!\n");
        }
        break;
    case 2:
        if (areaKm == areaKm2){
            printf("empate na area\n");
        }else if (areaKm > areaKm2){
            printf("\nCarta - 1 Nome do Pais: %s\n", nomePais);
            printf("Carta - 2 Nome do Pais: %s\n", nomePais2);
            printf("\nAtributo escolhido foi [km²]\n");
            printf("Carta - 1 km²:%.2f\n", areaKm);
            printf("Carta - 2 km²:%.2f\n", areaKm2);
            printf("\n--- Vencedor ---\n");
            printf("Carta 1 acabou vencendo!\n");
        }else{
            printf("\nCarta - 1 Nome do Pais: %s\n", nomePais);
            printf("Carta - 2 Nome do Pais: %s\n", nomePais2);
            printf("\nAtributo escolhido foi [km²]\n");
            printf("Carta - 1 km²:%.2f\n", areaKm);
            printf("Carta - 2 km²:%.2f\n", areaKm2);
            printf("\n--- Vencedor ---\n");
            printf("Carta 2 acabou vencendo!\n");
        }
        break;
    case 3: 
        if (pib == pib2){
            printf("empate no pib\n");
        }else if ( pib  > pib2){
            printf("\nCarta - 1 Nome do Pais: %s\n", nomePais);
            printf("Carta - 2 Nome do Pais: %s\n", nomePais2);
            printf("\nAtributo escolhido foi [PIB]\n");
            printf("Carta - 1 pib:%.2f\n", pib);
            printf("Carta - 2 pib:%.2f\n", pib2);
            printf("\n--- Vencedor ---\n");
            printf("Carta - 1 acabou vencendo!\n");
        }else{
            printf("\nCarta - 1 Nome do Pais: %s\n", nomePais);
            printf("Carta - 2 Nome do Pais: %s\n", nomePais2);
            printf("\nAtributo escolhido foi [PIB]\n");
            printf("Carta - 1 pib:%.2f\n", pib);
            printf("Carta - 2 pib:%.2f\n", pib2);
            printf("\n--- Vencedor ---\n");
            printf("Carta - 2 acabou vencendo\n!");
        }
        break;
    case 4:
        if (numeroPontosTuristicos2 == numeroPontosTuristicos){
            printf("empate no pontos turisticos\n");
        }else if (numeroPontosTuristicos > numeroPontosTuristicos2){
            printf("\nCarta - 1 Nome do Pais: %s\n", nomePais);
            printf("Carta - 2 Nome do Pais: %s\n", nomePais2);
            printf("\nAtributo escolhido foi [Numero de pontos turisticos]\n");
            printf("Carta - 1 pontos turisticos:%i\n", numeroPontosTuristicos);
            printf("Carta - 2 pontos turisticos:%i\n", numeroPontosTuristicos2);
            printf("\n--- Vencedor ---\n");
            printf("Carta 1 venceu\n");
        }else {
            printf("\nCarta - 1 Nome do Pais: %s\n", nomePais);
            printf("Carta - 2 Nome do Pais: %s\n", nomePais2);
            printf("\nAtributo escolhido foi [Numero de pontos turisticos]\n");
            printf("Carta - 1 pontos turisticos:%i\n", numeroPontosTuristicos);
            printf("Carta - 2 pontos turisticos:%i\n", numeroPontosTuristicos2);
            printf("\n--- Vencedor ---\n");
            printf("Carta 2 venceu\n");
        }
        break;
    case 5:
        if (densidadePopulacional == densidadePopulacional2){
            printf("empate na densidade populacional.\n");
        }else if (densidadePopulacional > densidadePopulacional2){
            printf("\nCarta - 1 Nome do Pais: %s\n", nomePais);
            printf("Carta - 2 Nome do Pais: %s\n", nomePais2);
            printf("\nAtributo escolhido foi [densidade popolacional]\n");
            printf("Carta - 1 Densidade popolacional:%.2f\n", densidadePopulacional);
            printf("Carta - 2 Densidade popolacional:%.2f\n", densidadePopulacional2);
            printf("\n--- Vencedor ---\n");
            printf("Carta - 2 venceu\n");
        }else{
            printf("\nCarta - 1 Nome do Pais: %s\n", nomePais);
            printf("Carta -2 Nome do Pais: %s\n", nomePais2);
            printf("\nAtributo escolhido foi [densidade popolacional]\n");
            printf("Carta - 1 Densidade popolacional:%.2f\n", densidadePopulacional);
            printf("Carta - 2 Densidade popolacional:%.2f\n", densidadePopulacional2);
            printf("\n--- Vencedor ---\n");
            printf("Carta - 1 venceu\n");
        }
        break;
    default:
        printf("Opção escolhida invalida!\n");
        break;
    }
    return 0;
}