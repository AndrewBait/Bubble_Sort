#include <stdio.h>

int main() {
  int vetor[5] = {5, 4, 3, 2, 1};  // vetor a ser ordenado
  int tamanho = 5;  // tamanho do vetor
  int i, j, aux;

  for (i = 0; i < tamanho-1; i++) {
    for (j = 0; j < tamanho-i-1; j++) {
      if (vetor[j] > vetor[j+1]) {
        // Troca os elementos
        aux = vetor[j];
        vetor[j] = vetor[j+1];
        vetor[j+1] = aux;
      }
    }
  }

  // Imprime o vetor ordenado
  for (i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }

  return 0;
}
