#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

  char Estado;
  char CodigoCarta[4];
  char Cidade[50];
  int Populacao;
  float AreaKm2;
  float PIB;
  int NumPontosTuristicos;

  printf ("Desafio Super Trunfo - Países!\n");

  printf ("Digite o Estado: \n");
  scanf ("%s", &Estado);  

  printf ("Digite o Código da Carta: \n");
  scanf ("%s", CodigoCarta);

  printf ("Digite o Nome da Cidade: \n");
  scanf ("%s", Cidade);

  printf ("População: \n");
  scanf ("%s", Populacao);

  printf ("Digite a Área em Km²: \n");
  scanf ("%f", AreaKm2);

  printf ("Digite PIB: \n");
  scanf ("%f", PIB);





return 0;
} 
