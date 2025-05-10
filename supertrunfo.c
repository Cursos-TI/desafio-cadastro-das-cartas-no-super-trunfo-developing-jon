#include <stdio.h>
#include <string.h>

int main(){

    //BLOCO DE CÓDIGO DOS DADOS DA PRIMEIRA CARTA
    char siglacarta[3], estado[20], cidadenome[20]; 
    float area, pib, densidade1, densidade2, ppc1, ppc2;
    int npt, populacao;
    

    printf("Logo abaixo, insira os dados da primeira carta:\n");

    //INSERIR O ESTADO DA CARTA
    printf("Digite o nome do Estado: ");
    fgets(estado, 20, stdin);
    estado[strcspn(estado, "\n")] = 0;

    //INSERIR A SIGLA DO ESTADO
    printf("Digite a sigla do Estado: ");
    scanf("%s", siglacarta);
    getchar();

    //INSERIR O NOME DA CIDADE
    printf("Digite o nome da cidade: ");
    fgets(cidadenome,20,stdin);
    cidadenome[strcspn(cidadenome, "\n")] = 0;

    //INSERIR A POPULACAO
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    //INSERIR A AREA
    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    //INSERIR O PIB
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    //INSERIR OS PONTOS TURISTICOS
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &npt);
    getchar();
    
    //BLOCO DE CÓDIGO DOS DADOS DA SEGUNDA CARTA
    char siglacarta2[3], estado2[20], cidadenome2[20]; 
    float area2, pib2;
    int npt2, populacao2;

    printf("\nAgora, digite os dados da segunda carta: \n");

    //INSERIR O ESTADO DA CARTA
    printf("\nEstado: ");
    fgets(estado2,20,stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    //INSERIR O A SIGLGA DO ESTADO
    printf("Digite a sigla do Estado: ");
    scanf("%s", siglacarta2);
    getchar();

    //INSERIR O NOME DA CIDADE
    printf("Digite o nome da cidade: ");
    fgets(cidadenome2,20,stdin);
    cidadenome2[strcspn(cidadenome2, "\n")] = 0;

    //INSERIR A POPULAÇÃO
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    //INSERIR A ÁREA
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    //INSERIR O PIB
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    //INSERIR OS PONTOS TURISTICOS
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &npt2);

    //IMPRESSAO DOS DADOS
    printf("\nAqui estão os dados digitados das cartas: \n");

    //CALCULO DA DENSIDADE
    densidade1 = populacao / area;
    densidade2 = populacao2 / area2;
    //CALCULO DO PIB PER CAPITA
    ppc1 = pib / populacao;
    ppc2 = pib2 / populacao2;


    //CARTA 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Sigla do Estado: %s\n", siglacarta);
    printf("Nome da Cidade: %s\n", cidadenome);
    printf("População: %d\n", populacao);
    printf("Área da cidade: %.2f km²\n", area);
    printf("PIB: R$ %.2f \n", pib);
    printf("Número de Pontos Turísticos: %d  \n", npt);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", ppc1);

    //CARTA 2 
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Sigla do Estado: %s\n", siglacarta2);
    printf("Nome da Cidade: %s\n", cidadenome2);
    printf("População: %d\n", populacao2);
    printf("Área da cidade: %.2f km²\n", area2);
    printf("PIB: R$%.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", ppc2);
    

    return 0; 

}