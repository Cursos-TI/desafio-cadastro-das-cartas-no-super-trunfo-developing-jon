#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

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
    printf("\nDigite o nome do Estado: ");
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

    //INSERIR O ESTADO DA CARTA 2
    printf("\nDigite o nome do Estado: ");
    fgets(estado2,20,stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    //INSERIR O A SIGLGA DO ESTADO 2
    printf("Digite a sigla do Estado: ");
    scanf("%s", siglacarta2);
    getchar();

    //INSERIR O NOME DA CIDADE 2
    printf("Digite o nome da cidade: ");
    fgets(cidadenome2,20,stdin);
    cidadenome2[strcspn(cidadenome2, "\n")] = 0;

    //INSERIR A POPULAÇÃO 2
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    //INSERIR A ÁREA 2
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    //INSERIR O PIB 2
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib2);

    //INSERIR OS PONTOS TURISTICOS 2
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

    //APRESENTAÇÃO DOS DADOS
    printf("\nAqui estão os dados digitados das cartas: \n");

    //CARTA 1
    printf("\n-----Carta----- 1\n");
    printf("Estado: %s\n", estado);
    printf("Sigla do Estado: %s\n", siglacarta);
    printf("Nome da Cidade: %s\n", cidadenome);
    printf("População: %lu\n", populacao);
    printf("Área da cidade: %.2f km²\n", area);
    printf("PIB: R$ %.2lf \n", pib);
    printf("Número de Pontos Turísticos: %d  \n", npt);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", ppc1);

    //CARTA 2 
    printf("\n-----Carta 2-----\n");
    printf("Estado: %s\n", estado2);
    printf("Sigla do Estado: %s\n", siglacarta2);
    printf("Nome da Cidade: %s\n", cidadenome2);
    printf("População: %lu\n", populacao2);
    printf("Área da cidade: %.2lf km²\n", area2);
    printf("PIB: R$%.2lf \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", ppc2);
    
    //COMPARAÇÃO DOS ATRIBUTOS
    printf("\n-----RESULTADO DAS COMPARAÇÕES-----\n");
    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Número de pontos turísticos: %d\n", npt > npt2);
    printf("PIB Per Capita: %d\n", ppc1 > ppc2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("Super Poder: %d\n", SuperPoder > SuperPoder2);


    //COMPARAÇÃO CONDICIONAL DOS DADOS APRESENTADOS
    printf("\n-----COMPARAÇÕES CONDICIONAIS-----\n");
    
    printf("\nPopulação de %s de %lu - População de %s de %lu\n", cidadenome, populacao,
    cidadenome2, populacao2);
    if(populacao > populacao2){

        printf("Carta 1 é a vencedora!\n");
    } else {
        printf("Carta 2 é a vencedora!\n");
    }

    printf("\nÁrea de %s de %.2f km² - Área de %s de %.2f km²\n", cidadenome, area, cidadenome2, area2);
    if(area > area2){
        printf("Carta 1 é a vencedora!\n");
    } else {
        printf("Carta 2 é a vencedora!\n");
    }
    
    printf("\nPIB de %s de R$ %.2lf - PIB de %s de R$ %.2f\n", cidadenome, pib, cidadenome2, pib2);
    if(pib > pib2){
        printf("Carta 1 é a vencedora!\n");
    } else {
        printf("Carta 2 é a vencedora!\n");
    }

    printf("\nNº de pontos turísticos de %s de %d - Nº de pontos turísticos de %s de %d\n", 
    cidadenome, npt, cidadenome2, npt2);
    if(npt > npt2){
        printf("Carta 1 é a vencedora!\n");
    } else {
        printf("Carta 2 é a vencedora!\n");
    }

    printf("\nPIB per capita de %s de %.2f reais - PIB per capita de %s de %.2f reais\n", 
    cidadenome, ppc1, cidadenome2, ppc2);
    if(ppc1 > ppc2){
        printf("Carta 1 é a vencedora!\n");
    } else {
        printf("Carta 2 é a vencedora!\n");
    }

    printf("\nDensidade populacional de %s de %.2lf hab/km² - Densidade Populacional de %s de %.2lf hab/km²\n",
    cidadenome, densidade1, cidadenome2, densidade2);
    if(densidade1 < densidade2){
        printf("Carta 1 é a vencedora!\n");
    } else {
        printf("Carta 2 é a vencedora!\n");
    }

    //DESAFIO AVENTUREIRO LVL 2, COMPARAÇÃO E MENU INTERATIVO
    int atributoJogador;
    
    printf("\n-----MENU INTERATIVO-----\n");
    printf("\nEscolha abaixo um dos atributos para poder efetuar a comparação:\n");
    printf("1. Nome do país\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidde demográfica\n");
    printf("Escolha seu atributo: ");
    scanf("%d", &atributoJogador);

    switch (atributoJogador)
    {
    case 1: 
        printf("\nAtributo: Nome da Cidade.\n");
        printf("Carta 1: %s - Carta 2: %s \n", cidadenome, cidadenome2);
        printf("Atributo somente informativo.\n");
        break;

    case 2: 
        printf("\nAtributo: População\n");
        printf("%s: %lu - %s: %lu \n", cidadenome, populacao, cidadenome2, populacao2);
        if (populacao > populacao2){
            printf("Carta 1 venceu!\n");
        } else if (populacao2 > populacao){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empatou!\n");
        }
        break;

        case 3: 
        printf("\nAtributo: Área\n");
        printf("%s: %.2f - %s: %.2f \n", cidadenome, area, cidadenome2, area2);
        if (area > area2){
            printf("Carta 1 venceu!\n");
        } else if (area2 > area){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empatou!\n");
        }
        break;

        case 4: 
        printf("\nAtributo: PIB\n");
        printf("%s: %.2lf - %s: %.2lf \n", cidadenome, pib, cidadenome2, pib2);
        if (pib > pib2){
            printf("Carta 1 venceu!\n");
        } else if (pib2 > pib){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empatou!\n");
        }
        break;

        case 5:

        printf("\nAtributo: Número de Pontos Turísticos\n");
        printf("%s: %d - %s: %d \n", cidadenome, npt, cidadenome2, npt2);
        if (npt > npt2){
            printf("Carta 1 venceu!\n");
        } else if (npt2 > npt){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empatou!\n");
        }
        break;

        case 6: 
        printf("\nAtributo: Densidade Demográfica\n");
        printf("%s: %.2f - %s: %.2f \n", cidadenome, densidade1, cidadenome2, densidade2);
        if (densidade1 < densidade2){
            printf("Carta 1 venceu!\n");
        } else if (densidade2 < densidade1){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empatou!\n");
        }
        break;
    default:
        printf("\nOpção Inválida\n");
    }

    //DESAFIO NIVEL MESTRE

long double valor1_carta1 = 0, valor2_carta1 = 0;
long double valor1_carta2 = 0, valor2_carta2 = 0;
int vencedor_attr1 = 0, vencedor_attr2 = 0, vencedor_soma = 0, atributo1, atributo2;


    printf("\nAgora, iremos comparar dois atributos ao mesmo tempo!\n");
    
    printf("\n1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB Per Capita\n");
    printf("Escolha o primeiro atributo que deseja comparar entre as duas cartas: \n");
    scanf("%d", &atributo1);

    printf("Escolha o segundo atributo que deseja comparar entre as duas cartas: \n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2){
        printf("Erro! É necessário dois atributos diferentes! Reinicie o programa.\n");
    } else {
        switch (atributo1)
        {
        case 1:
            valor1_carta1 = populacao;
            valor1_carta2 = populacao2;
            vencedor_attr1 = (valor1_carta1 > valor1_carta2) ? 1 : 2;
        break;
        
        case 2:
            valor1_carta1 = area;
            valor1_carta2 = area2;
            vencedor_attr1 = (valor1_carta1 > valor1_carta2) ? 1 : 2;
        break;
        
        case 3: 
            valor1_carta1 = pib;
            valor1_carta2 = pib2;
            vencedor_attr1 = (valor1_carta1 > valor1_carta2) ? 1 : 2;
        break;
            
        case 4: 
            valor1_carta1 = npt;
            valor1_carta2 = npt2;
            vencedor_attr1 = (valor1_carta1 > valor1_carta2) ? 1 : 2;
        break;
        
        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            vencedor_attr1 = (valor1_carta1 < valor1_carta2) ? 1 : 2;
        break;
        
        case 6:
            valor1_carta1 = ppc1;
            valor1_carta2 = ppc2;
            vencedor_attr1 = (valor1_carta1 > valor1_carta2) ? 1 : 2;
        break;

        default:
            printf("Opção Inválida!\n");
        break;    
        }

        switch (atributo2){
        case 1:
            valor2_carta1 = populacao;
            valor2_carta2 = populacao2;
            vencedor_attr2 = (valor1_carta2 > valor2_carta2) ? 1 : 2;
        break;
        
        case 2:
            valor2_carta1 = area;
            valor2_carta2 = area2;
            vencedor_attr2 = (valor1_carta2 > valor2_carta2) ? 1 : 2;
        break;
        
        case 3: 
            valor2_carta1 = pib;
            valor2_carta2 = pib2;
            vencedor_attr2 = (valor1_carta2 > valor2_carta2) ? 1 : 2;
        break;
            
        case 4: 
            valor2_carta1 = npt;
            valor2_carta2 = npt2;
            vencedor_attr2 = (valor1_carta2 > valor2_carta2) ? 1 : 2;
        break;
        
        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            vencedor_attr2 = (valor1_carta2 < valor2_carta2) ? 1 : 2;
        break;
        
        case 6:
            valor2_carta1 = ppc1;
            valor2_carta2 = ppc2;
            vencedor_attr2 = (valor1_carta2 > valor2_carta2) ? 1 : 2;
        break;

        default:
            printf("Opção Inválida!\n");
        break;    
        }        
        
    }
  
long double soma_carta1 = valor1_carta1 + valor2_carta1;
long double soma_carta2 = valor1_carta2 + valor2_carta2;
vencedor_soma = (soma_carta1 > soma_carta2) ? 1 : 2;


printf("\n==== Resultado da Comparação ====\n");
printf("Cidade 1: %s\n", cidadenome);
printf("Cidade 2: %s\n\n", cidadenome2);

// Mostrar os atributos comparados 
printf("Atributo 1 escolhido: %d\n", atributo1); 
printf(" -> %s: %.2Lf\n", cidadenome, valor1_carta1);
printf(" -> %s: %.2Lf\n", cidadenome2, valor1_carta2);

if (valor1_carta1 == valor1_carta2) {
    printf("Resultado: Empate no atributo 1!\n\n");
} else {
    printf("Resultado: Vencedora no atributo 1: %s\n\n", 
           vencedor_attr1 == 1 ? cidadenome : cidadenome2);
}

printf("Atributo 2 escolhido: %d\n", atributo2);
printf(" -> %s: %.2Lf\n", cidadenome, valor2_carta1);
printf(" -> %s: %.2Lf\n", cidadenome2, valor2_carta2);

if (valor2_carta1 == valor2_carta2) {
    printf("Resultado: Empate no atributo 2!\n\n");
} else {
    printf("Resultado: Vencedora no atributo 2: %s\n\n", 
           vencedor_attr2 == 1 ? cidadenome : cidadenome2);
}

// Mostrar a soma
printf("==== Comparação da SOMA dos dois atributos ====\n");
printf(" -> %s: %.2Lf\n", cidadenome, soma_carta1);
printf(" -> %s: %.2Lf\n", cidadenome2, soma_carta2);

if (soma_carta1 == soma_carta2) {
    printf("Resultado final: Empate na soma dos atributos!\n");
} else {
    printf("Resultado final: Vencedora na soma: %s\n",
           vencedor_soma == 1 ? cidadenome : cidadenome2);
}

    
    
    return 0; 

}