#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // char estado[3], estado2[3];
  // char codigoCarta[4], codigoCarta2[4];
  char nomePais[30], nomePais2[30];
  int populacao, populacao2;
  float area, area2;
  float pib, pib2;
  int numeroPontosTuristicos, numeroPontosTuristicos2;
  float densiPopu, pibPerCapita, densiPopu2, pibPerCapita2;
  float calculo, calculo2;


  // Área para entrada de dados
  printf("\n Digite o estado com apenas 1 letra, sendo da letra A até a letra H: ");
  scanf("%s", &estado);

  printf("\n Digite o código da cidade, sendo o 1º digito a letra anteriormente seguida de 2 números entre 01 até 04: ");
  scanf("%s", &codigoCarta);

  printf("\n Digite o nome da cidade: ");
  scanf(" %[^\n]", &nomeCidade);

  printf("\n Digite a quantidade de habitantes que residem da cidade: ");
  scanf("%d", &populacao);

  printf("\n Digite a area total da cidade em Km2: ");
  scanf(" %f", &area);

  printf("\n Digite o PIB da cidade em bilhões de Dolares: ");
  scanf(" %f", &pib);

  printf("\n Digite a quantidade de pontos turisticos da cidade: ");
  scanf(" %d", &numeroPontosTuristicos);

  // calculando Densidade populacional e PIB per capta da Carta 1
  densiPopu = (float) populacao / area; // calcula a densidade populacional em hab/km2 da carta 1
  calculo = (pib * 1000000000);
  pibPerCapita = calculo / populacao; // Calcular o PIB per capita da carta 1


  printf("\n Digite as informações da Carta 2! \n");

  printf("\n Digite o estado com apenas 1 letra, sendo da letra A até a letra H: ");
  scanf("%s", &estado2);

  printf("\n Digite o código da cidade, sendo o 1º digito a letra anteriormente seguida de 2 números entre 01 até 04: ");
  scanf("%s", &codigoCarta2);

  printf("\n Digite o nome da cidade: ");
  scanf(" %[^\n]", &nomeCidade2);

  printf("\n Digite a quantidade de habitantes que residem da cidade: ");
  scanf("%d", &populacao2);

  printf("\n Digite a area total da cidade em Km2: ");
  scanf(" %f", &area2);

  printf("\n Digite o PIB cidade em bilhões de Dolares: ");
  scanf(" %f", &pib2);

  printf("\n Digite a quantidade de pontos turisticos da cidade: ");
  scanf(" %d", &numeroPontosTuristicos2);
  
  // calculando Densidade populacional e PIB per capta da Carta 2
  densiPopu2 = (float) populacao2 / area2; // calcula a densidade populacional em hab/km2 da carta 2
  calculo2 = pib2 * 1000000000;
  pibPerCapita2 = calculo2 / (float) populacao2; // Calcular o PIB per capita da carta 2


  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigoCarta);
  printf("Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Area da cidade: %.2f Km2\n", area);
  printf("PIB: %.2f Bilhões de Reais\n", pib);
  printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);
  printf("Densidade Populacional: %.2f hab/Km2\n", densiPopu);
  
  printf("PIB per Capita: %.2f reais\n", pibPerCapita);

  
  // Área para exibição dos dados da cidade
  printf("\nCarta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigoCarta2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Area da cidade: %.2f Km2\n", area2);
  printf("PIB: %.2f Bilhões de Reais\n", pib);
  printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/Km2\n", densiPopu2);
  
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

return 0;
}