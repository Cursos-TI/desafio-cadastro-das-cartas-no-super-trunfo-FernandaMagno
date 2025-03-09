#include <stdio.h>
#include <string.h>

int main() {
    float area, pib, densidadePopu; 
    int populacao, pontoTu, codigoCidade;
    char nome[50];
    
    // Cadastro das Cartas:
    printf("Informe o nome da cidade: \n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Informe o codigo da cidade: \n");
    scanf("%d", &codigoCidade);

    printf("Informe o numero de pontos turisticos: \n");
    scanf("%d", &pontoTu);

    printf("Informe o numero de habitantes: \n");
    scanf("%d", &populacao);

    printf("Informe o PIB(Produto Interno Bruto): \n");
    scanf("%f", &pib);

    printf("Informe a area da cidade: \n");
    scanf("%f", &area);

    densidadePopu = populacao / area;

    // Exibição dos Dados das Cartas:
    printf("\n-------- Visao Geral da Cidade--------\n");
    printf("Nome da cidade: %s\n", nome);
    printf("Codigo da Cidade: %d\n", codigoCidade);
    printf("Pontos Turisticos: %d\n", pontoTu);
    printf("Habitantes: %d\n", populacao);
    printf("PIB: %.2f\n", pib);
    printf("Area em km2: %.2f\n", area);
    printf("Densidade populacional: %.2f habitantes por km quadrado.\n", densidadePopu);


    return 0;
}
