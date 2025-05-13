#include <stdio.h>
#include <string.h>

int main(){

    //VAIRÁVEIS DA PRIMEIRA CARTA
    char siglacarta[3], estado[20], cidadenome[20];
    unsigned long int populacao; 
    float area, densidade1, ppc1, SuperPoder;
    double pib; //AQUI A VARIÁVEL É DOUBLE PARA PODER ARMAZENAR MAIORES VALORES COMO BILHÕES
    int npt;
    
    
    //VARIÁVEIS DA SEGUNDA CARTA
    char siglacarta2[3], estado2[20], cidadenome2[20]; 
    unsigned long int populacao2;
    float area2, densidade2, ppc2, SuperPoder2;
    double pib2; //AQUI A VARIÁVEL É DOUBLE PARA PODER ARMAZENAR MAIORES VALORES COMO BILHÕES
    int npt2;

    printf("Logo abaixo, insira os dados da primeira carta:\n");

    //INSERIR O ESTADO DA CARTA 1
    printf("Digite o nome do Estado: ");
    fgets(estado, 20, stdin);
    estado[strcspn(estado, "\n")] = 0;

    //INSERIR A SIGLA DO ESTADO 1
    printf("Digite a sigla do Estado: ");
    scanf("%s", siglacarta);
    getchar();

    //INSERIR O NOME DA CIDADE 1
    printf("Digite o nome da cidade: ");
    fgets(cidadenome,20,stdin);
    cidadenome[strcspn(cidadenome, "\n")] = 0;

    //INSERIR A POPULACAO 1
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao);

    //INSERIR A AREA 1
    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    //INSERIR O PIB 1
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib);

    //INSERIR OS PONTOS TURISTICOS 1
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &npt);
    getchar();
    
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
    scanf("%lu", &populacao2);

    //INSERIR A ÁREA
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    //INSERIR O PIB
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib2);

    //INSERIR OS PONTOS TURISTICOS
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &npt2);

    //CALCULO DA DENSIDADE
    densidade1 = populacao / area;
    densidade2 = populacao2 / area2;

    //CALCULO DO PIB PER CAPITA
    ppc1 = pib / populacao;
    ppc2 = pib2 / populacao2;

    //CALCULO DO SUPER PODER
    SuperPoder = populacao + area + pib + npt + ppc1 + (1 / densidade1);
    SuperPoder2 = populacao2 + area2 + pib2 + npt2 + ppc2 + (1 / densidade2);

    //IMPRESSAO DOS DADOS
    printf("\nAqui estão os dados digitados das cartas: \n");

    //CARTA 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Sigla do Estado: %s\n", siglacarta);
    printf("Nome da Cidade: %s\n", cidadenome);
    printf("População: %lu\n", populacao);
    printf("Área da cidade: %.2f km²\n", area);
    printf("PIB: R$ %.2lf \n", pib);
    printf("Número de Pontos Turísticos: %d  \n", npt);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", ppc1);

    //CARTA 2 
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Sigla do Estado: %s\n", siglacarta2);
    printf("Nome da Cidade: %s\n", cidadenome2);
    printf("População: %lu\n", populacao2);
    printf("Área da cidade: %.2lf km²\n", area2);
    printf("PIB: R$%.2lf \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", ppc2);
    
    //COMPARAÇÃO DOS ATRIBUTOS
    printf("\nResultado das comparações: \n");
    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Número de pontos turísticos: %d\n", npt > npt2);
    printf("PIB Per Capita: %d\n", ppc1 > ppc2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("Super Poder: %d\n", SuperPoder > SuperPoder2);

    return 0; 

}