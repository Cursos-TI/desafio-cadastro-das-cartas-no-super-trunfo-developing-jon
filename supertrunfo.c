#include <stdio.h>

int main(){

    char siglacarta[2], estado[20], cidadenome[20]; 
    float area, pib;
    int npt, populacao;

    printf("Logo abaixo, insira os dados da primeira carta:\n");
    printf("Digite o Estado: ");
    fgets(estado,20,stdin);

    printf("Digite a sigla do Estado: ");
    scanf("%s", siglacarta);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidadenome,20,stdin);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    getchar();

    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    getchar();

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    getchar();

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &npt);
    getchar();
    printf("\n");

    //DADOS DA SEGUNDA CARTA
    char siglacarta2[2], estado2[20], cidadenome2[20]; 
    float area2, pib2;
    int npt2, populacao2;

    printf("Agora, digite os dados da segunda carta: \n");
    printf("Estado: ");
    fgets(estado2,20,stdin);
    
    printf("Digite a sigla do Estado: ");
    scanf("%s", siglacarta2);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidadenome2,20,stdin);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    getchar();

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &npt2);
    getchar();

    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Sigla do Estado: %s\n", siglacarta);
    printf("Nome da Cidade: %s\n", cidadenome);
    printf("População: %d\n", populacao);
    printf("Área da cidade: %.2f km\n", area);
    printf("PIB:R$ %.2f \n", pib);
    printf("Número de Pontos Turísticos: %d  \n", npt);
    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Sigla do Estado: %s\n", siglacarta2);
    printf("Nome da Cidade: %s\n", cidadenome2);
    printf("População: %d\n", populacao2);
    printf("Área da cidade: %.2f km\n", area2);
    printf("PIB:R$ %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d", npt2);
    

    return 0; 

}