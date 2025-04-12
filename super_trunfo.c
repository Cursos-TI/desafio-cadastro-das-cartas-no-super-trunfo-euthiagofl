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
    //calculando a densaidade populacional
    densidadepop1 = populacao1/area1;
    //recebendo o números de pontos turisticos da primeira carta
    printf("Digite a quatidade de pontos turíticos na cidade: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");
    printf("Carta cadastrada com sucesso!\n");
    printf("\n");

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
     printf("\n");
 
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
    //calculando a densaidade populacional
    densidadepop2 = populacao2/area2;
    //recebendo o números de pontos turisticos da segunda carta
    printf("Digite a quatidade de pontos turíticos na cidade: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");
    printf("Carta cadastrada com sucesso!\n");
   
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
    printf("\n");

}
int main(){

cadastrarCarta1();
exibirCarta1();
cadastrarCarta2();
exibirCarta2();


}