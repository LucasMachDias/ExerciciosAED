/*
Exercício 6. Implemente uma função int soma(int *v, int n) que receba um vetor de inteiros e seu tamanho e retorne a soma de seus elementos.
Restrição: Dentro da função, percorra o vetor utilizando ponteiros, sem utilizar v[i].
*/

//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---

#include <stdio.h>

// Retorna a soma dos elementos do vetor.
int soma(int *v, int n){
    int acumulador = 0;
    for(int i = 0; i < n; i++){
        acumulador = acumulador + v[i]; // Soma cada elemento do vetor.
    }
    return acumulador; // Retorna a soma dos elementos do vetor.
}

int main(){
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Cria e inicializa um vetor com dez elementos.
    int n = 10; // Define o tamanho do vetor.
    printf("A soma dos elementos do vetor e: %d\n", soma(v, n)); // Chama a função soma passando o vetor e seu tamanho.
    return 0; // Indica que o programa terminou corretamente.
}
