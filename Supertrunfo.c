#include <stdio.h>

int main(){
char estado;
char codigo[10];
char cidade[20];
unsigned long int populacao;
float area;
float pib;
int pontosturisticos;
float densidadepopulacional  = populacao / area;
float pibpercapita = populacao / pib;
int superPoder = populacao + area + pib + pontosturisticos + pibpercapita + (area / populacao);

printf("***Bem vindo ao jogo super trunfo***\n");
printf("Por favor! Cadastre a Carta 1 para começarmos o jogo!!\n");
printf("Carta 1: \n");

printf("Digite o Estado utilizando uma letra de 'A' a 'H': \n");
scanf("%c", &estado);
printf("Estado: %c\n", estado);

printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) esse é o seu código!: \n");
scanf("%s", &codigo);
printf("Código: %s\n", codigo);

printf("Digite a Cidade: \n");
scanf("%s", &cidade);
printf("Cidade: %s\n", cidade);

printf("Digite sua População: \n");
scanf("%ld", &populacao);
printf("População: %d\n", populacao);

printf("Digite a área: \n");
scanf("%f", &area);
printf("Área: %2.f km²\n", area);

printf("Digite o Pib: \n");
scanf("%f", &pib);
printf("Pib: %2.f bilhões de reais\n", pib);

printf("Digite a quantidade de PontosTurísticos: \n");
scanf("%d", &pontosturisticos);
printf("Pontosturísticos: %d\n", pontosturisticos);

printf("Aqui será exibida a DensidadePopulacional \n");
printf("DensidadePopulacional: %f hab/km²\n", populacao / area);

printf("Aqui será exibida o Pib per capita: \n");
printf("Pibpercapita: %f reais\n", pib / populacao);

printf("Esse é o seu SuperPoder!!! , ele determinará todo seus atributos somados: \n");
printf("SuperPoder: %d\n",  populacao + area + pib + pontosturisticos + pibpercapita + (area / populacao));






char estadO;
char Codigo[10];
char Cidade[20];
unsigned long int Populacao;
float Area;
float Pib;
int Pontosturisticos;
float Densidadepopulacional = Populacao / Area;
float Pibpercapita = Populacao / Pib;
int SuperPoder = Populacao + Area + Pib + Pontosturisticos + Pibpercapita + (Area / Populacao);

printf("*** Depois de ter cadastrado a primeira carta, cadastre outra para compararmos ***\n");
printf("Por favor! Cadastre a Carta 2 para começarmos o jogo!!\n");
printf("Carta 2: \n");

printf("Digite o Estado utilizando uma letra de 'A' a 'H': \n");
scanf("%s",&estadO);
printf("Estado: %c\n", estadO);

printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) esse é o seu código!: \n");
scanf("%s", &Codigo);
printf("Seu código é: %s\n", Codigo);

printf("Digite a Cidade: \n");
scanf("%s", &Cidade);
printf("Cidade: %s\n", Cidade);

printf("Digite sua População: \n");
scanf("%ld", &Populacao);
printf("População: %d\n", Populacao);

printf("Digite a área: \n");
scanf("%f", &Area);
printf("Área: %2.f km²\n", Area);

printf("Digite o Pib: \n");
scanf("%f", &Pib);
printf("Pib: %2.f bilhões de reais\n", Pib);

printf("Digite a quantidade de PontosTurísticos: \n");
scanf("%d", &Pontosturisticos);
printf("Pontosturísticos: %d\n", Pontosturisticos);

printf("Aqui será exibida a DensidadePopulacional \n");
printf("DensidadePopulacional: %f hab/km²\n", Populacao / Area);

printf("Aqui será exibida o Pib per capita: \n");
printf("Pibpercapita: %f reais\n", Pib / Populacao);

printf("Esse é o seu SuperPoder!!! , ele determinará todo seus atributos somados: \n");
printf("SuperPoder: %d\n",  Populacao + Area + Pib + Pontosturisticos + Pibpercapita + (Area / Populacao));


















































































return 0;
}