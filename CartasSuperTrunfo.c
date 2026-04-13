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
  printf("Carta 1 - Digite uma letra de A a H: \n ");
scanf("%s", Estado1);

printf("Carta 1 - Digite o Código da Carta: \n " );
scanf("%4s", Codcarta1);

printf("Carta 1 - Digite o Nome da Cidade: \n");
scanf("%s", Nome1);

printf("Carta 1 - Digite a População da Cidade \n" );
scanf("%d", &populacao);

printf("Carta 1 - Digite a Área da Cidade: \n");
scanf("%f", &Area);

printf("Carta 1 - Digite o PIB da Cidade: \n");
scanf("%f", &PIB);

printf("Carta 1 - Digite quantos Pontos Turisticos tem na Cidade:  \n");
scanf("%d", &pontosturisticos);

//Carta 2 
printf("Carta 2 - Digite uma letra de A a H: \n ");
scanf("%s", Estado2);

printf("Carta 2 - Digite o Código da Carta: \n " );
scanf("%4s", Codcarta2);

printf("Carta 2 - Digite o Nome da Cidade: \n");
scanf("%s", Nome2);

printf("Carta 2 - Digite a População da Cidade \n" );
scanf("%d", &populacao2);

printf("Carta 2 - Digite a Área da Cidade: \n");
scanf("%f", &Area2);

printf("Carta 2 - Digite o PIB da Cidade: \n");
scanf("%f", &PIB2);

printf("Carta 2 - Digite quantos Pontos Turisticos tem na Cidade:  \n");
scanf("%d", &pontosturisticos2);

// Área para exibição dos dados da cidade
//Carta 1
printf("Carta 1: \n Estado: %s \n ",Estado1);
printf("Código: %s \n", Codcarta1);
printf("Nome da Cidade: %s \n", Nome1);
printf("População: %d \n", populacao);
printf("Área: %.2f \n", Area);
printf("PIB: %.2f \n", PIB);
printf("Número de Pontos Turísticos: %d \n", pontosturisticos);
//Carta 2
printf("Carta 2: \n Estado: %s \n ",Estado2);
printf("Código: %s \n", Codcarta2);
printf("Nome da Cidade: %s \n", Nome2);
printf("População: %d \n", populacao2);
printf("Área: %.2f \n", Area2);
printf("PIB: %.2f \n", PIB2);
printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

return 0;

} 
