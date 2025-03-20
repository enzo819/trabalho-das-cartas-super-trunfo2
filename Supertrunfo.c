#include <stdio.h>

int main(){
char estado;
char codigo[10];
char cidade[20];
unsigned long int populacao;
float area;
float pib;
int pontosturisticos;
float densidadepopulacional = populacao / area;
float pibpercapita = pib / populacao;
float superPoder = populacao + area + pib + pontosturisticos + pibpercapita + (area / populacao);

printf("***Bem vindo ao jogo super trunfo***\n");
printf("Por favor! Cadastre a Carta 1 para começarmos o jogo!!\n");
printf("Carta 1: \n");

printf("Digite o Estado: \n");
scanf("%c", &estado);
printf("Estado: %c\n", estado);

printf("Digite o Código: \n");
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
printf("Áreaa: %2.f km²\n", area);

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
printf("SuperPoder: %f\n",  populacao + area + pib + pontosturisticos + pibpercapita + (area / populacao));

printf("***Veja aqui seu cadastro da carta 1***\n");
printf("Codigo: %s\n", &codigo);
printf("Estado: %c\n", &estado);
printf("Cidade: %s\n", &cidade);
printf("População: %ld\n", &populacao);
printf("Área: %2.f km²\n", &area);
printf("Pib: %2.f bilhões de reais\n", &pib);
printf("Pontos Turísticos: %d\n", &pontosturisticos);
printf("DensidadePopulacional: %f hab/km²\n", &densidadepopulacional);
printf("Pibpercapita: %f reais\n",&pibpercapita);
printf("SuperPoder: %f\n",  &superPoder);






















}