#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao, populacao2,  pontosturisticos, pontosturisticos2;
  char Estado1[3], Estado2[3], Codcarta1[10],Codcarta2[10],  Nome1[50], Nome2[50];
  float Area, Area2, PIB, PIB2;
  

  // Área para entrada de dados
printf("Carta 1 - Digite uma letra de A a H:  ");
scanf("%s", Estado1);

printf("Carta 1 - Digite o Código da Carta:  " );
scanf("%4s", Codcarta1);

printf("Carta 1 - Digite o Nome da Cidade: ");
scanf("%s", Nome1);

printf("Carta 1 - Digite a População da Cidade " );
scanf("%d", &populacao);

printf("Carta 1 - Digite a Área da Cidade: ");
scanf("%f", &Area);

printf("Carta 1 - Digite o PIB da Cidade: ");
scanf("%f", &PIB);

printf("Carta 1 - Digite quantos Pontos Turisticos tem na Cidade:  ");
scanf("%d", &pontosturisticos);

//Cálculo de densidade populacional e PIB per capta
float densidade1 = (float) populacao / Area;
float PPC = (float) PIB / populacao;

//Carta 2 
printf("Carta 2 - Digite uma letra de A a H:  ");
scanf("%s", Estado2);

printf("Carta 2 - Digite o Código da Carta:  " );
scanf("%s", Codcarta2);

printf("Carta 2 - Digite o Nome da Cidade: ");
scanf("%s", Nome2);

printf("Carta 2 - Digite a População da Cidade: " );
scanf("%d", &populacao2);

printf("Carta 2 - Digite a Área da Cidade: ");
scanf("%f", &Area2);

printf("Carta 2 - Digite o PIB da Cidade: ");
scanf("%f", &PIB2);

printf("Carta 2 - Digite quantos Pontos Turisticos tem na Cidade:  ");
scanf("%d", &pontosturisticos2);

//Cálculo de densidade populacional e PIB per capta
float densidade2 = (float) populacao2 / Area2;
float PPC2 = (float) PIB2 / populacao2;

// Área para exibição dos dados da cidade
//Carta 1
printf("Carta 1: \n Estado: %s \n ",Estado1);
printf("Código: %s \n", Codcarta1);
printf("Nome da Cidade: %s \n", Nome1);
printf("População: %d \n", populacao);
printf("Área: %f \n", Area);
printf("PIB: %f \n", PIB);
printf("Número de Pontos Turísticos: %d \n", pontosturisticos);
printf("O PIB per capta é de: %f \n", PPC);
printf("A Densidade populacional é de: %f \n", densidade1);
//Carta 2
printf("Carta 2: \n Estado: %s \n ",Estado2);
printf("Código: %s \n", Codcarta2);
printf("Nome da Cidade: %s \n", Nome2);
printf("População: %d \n", populacao2);
printf("Área: %f \n", Area2);
printf("PIB: %f \n", PIB2);
printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
printf("O PIB per capta é de: %f \n", PPC2);
printf("A Densidade populacional é de: %f \n", densidade2);

return 0;

} 
