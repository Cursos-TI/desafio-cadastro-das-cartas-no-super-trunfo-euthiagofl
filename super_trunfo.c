#include <stdio.h>

//declarando as variáveis da primeira carta
char estado1[20];
char codigo1[10];
char cidade1[20];
int populacao1;
int pontosTuristicos1;
float area1;
float pib1;
float pibpercapita1;
float densidadepop1;
float superPoder1;

//declarando as variáveis da segunda carta
char estado2[20];
char codigo2[10];
char cidade2[20];
int populacao2;
int pontosTuristicos2;
float area2;
float pib2;
float pibpercapita2;
float densidadepop2;
float superPoder2;

void cadastrarCarta1(){
    //recebendo o código da primeira carta
    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);
    //recebendo o estado da primeira carta
    printf("Digite o estado: ");
    scanf("%s", estado1);
    //recebendo o nome da cidade da primeira carta
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    //recebendo a população da primeira carta
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    //recebendo a área da primeira carta
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    //recebendo o PIB da primeira carta
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    //calculando o PIB per capita
    pibpercapita1 = pib1/populacao1;
    //calculando a densidade populacional
    densidadepop1 = populacao1/area1;
    //recebendo o número de pontos turísticos da primeira carta
    printf("Digite a quantidade de pontos turíticos na cidade: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");
    printf("Carta cadastrada com sucesso!\n");
    printf("\n");
    //calculando o super poder
    superPoder1 = populacao1 + pontosTuristicos1 + area1 + pib1 + pibpercapita1 + (1/densidadepop1);
}

void cadastrarCarta2(){
    //recebendo o código da segunda carta
   printf("Digite o código da segunda carta: ");
   scanf("%s", codigo2);
       //recebendo o estado da segunda carta
   printf("Digite o estado: ");
   scanf("%s", estado2);
       //recebendo o nome da cidade da segunda carta
   printf("Digite o nome da cidade: ");
   scanf("%s", cidade2);
       //recebendo a população da segunda carta
   printf("Digite a população da cidade: ");
   scanf("%d", &populacao2);
   //recebendo a área da segunda carta
   printf("Digite a área da cidade: ");
   scanf("%f", &area2);
   //recebendo o PIB da segunda carta
   printf("Digite o PIB da cidade: ");
   scanf("%f", &pib2);
   //calculando o PIB per capita
   pibpercapita2 = pib2/populacao2;
   //calculando a densidade populacional
   densidadepop2 = populacao2/area2;
   //recebendo o número de pontos turísticos da segunda carta
   printf("Digite a quantidade de pontos turíticos na cidade: ");
   scanf("%d", &pontosTuristicos2);
   printf("\n");
   printf("Carta cadastrada com sucesso!\n");
   printf("\n");
   //calculando o super poder
   superPoder2 = populacao2 + pontosTuristicos2 + area2 + pib2 + pibpercapita2 + (1/densidadepop2);
}

void exibirCarta1(){
     // imprimindo os dados da primeira carta
     printf("Carta 1: \n");
     printf("Estado: %s\n", estado1);
     printf("Código: %s%s\n", estado1, codigo1);
     printf("Nome da cidade: %s\n", cidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %.2f Km²\n", area1);
     printf("PIB: %.2f reais\n", pib1);
     printf("Números de pontos turíticos: %d \n", pontosTuristicos1);
     printf("Densidade Populacional: %.2f hab/km² \n", densidadepop1);
     printf("PIB per capita: %.2f reais \n", pibpercapita1);
     printf("Super Poder: %.2f\n", superPoder1);
     printf("\n");
 
}

void exibirCarta2(){
    // imprimindo os dados da segunda carta
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Números de pontos turíticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

}

//comparando os valores das cartas e imprimido os resultados
void compararCartas(){

    printf("Comparação de cartas: \n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadepop1 < densidadepop2 ? 1 : 2, densidadepop1 < densidadepop2 ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibpercapita1 > pibpercapita2 ? 1 : 2, pibpercapita1 > pibpercapita2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2 ? 1 : 0);

}

//chamando cada função na ordem
int main(){

cadastrarCarta1();
cadastrarCarta2();
exibirCarta1();
exibirCarta2();
compararCartas();

}