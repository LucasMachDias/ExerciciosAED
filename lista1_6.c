/*
Exercício 6. Implemente uma função int soma(int *v, int n) que receba um vetor de inteiros e seu tamanho e retorne a soma de seus elementos.
Restrição: Dentro da função, percorra o vetor utilizando ponteiros, sem utilizar v[i].
*/

//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---

#include <stdio.h>

int soma(int *v, int n){
    int acumulador = 0;
    for(int i = 0; i < n; i++){
        acumulador = acumulador + v[i];
    }
    return acumulador;
}

int main(){
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    printf("A soma dos elementos do vetor e: %d\n", soma(v, n));
    return 0;
}
