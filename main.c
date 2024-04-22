#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10
#define MAX 51

main() {
  int vet[TAM], vet2[TAM], vet3[TAM], x, cont = 0, cont2 = 0;
  srand(time(NULL));
  for(x = 0; x < TAM; x++){
    vet[x] = rand() % MAX;
  }
  for(x = 0; x < TAM; x++){
    if(vet[x] % 2 == 0){
      vet2[cont] = vet[x];
      cont = cont + 1;
    } 
  }
  for(x = 0; x < TAM; x++){
    if(vet[x] % 2 != 0){
      vet3[cont2] = vet[x];
      cont2 = cont2 + 1;
    } 
  }
  printf("\nVetor: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  printf("Vetor par: ");
  for(x = 0; x < cont; x++){
    if(x == cont - 1){
      printf("%i\n", vet2[x]);
    }
    else{
      printf("%i - ", vet2[x]);
    }
  }
  printf("Vetor ímpar: ");
  for(x = 0; x < cont2; x++){
    if(x == cont2 - 1){
      printf("%i\n", vet3[x]);
    }
    else{
      printf("%i - ", vet3[x]);
    }
  }
  getchar();
}