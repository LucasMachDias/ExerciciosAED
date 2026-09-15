/*
Exercício 7. Implemente uma função void troca_vizinhos(int *a, int *b) que receba os endereços de dois elementos consecutivos de um vetor e troque os valores desses
elementos. Em seguida, escreva um programa que percorra um vetor de inteiros e utilize a função para trocar os elementos do vetor dois a dois. Considere que o vetor
possui tamanho par.
Exemplo de execução:
● Antes: 10 20 30 40 50 60
● Depois: 20 10 40 30 60 50
*/

//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---

#include <stdio.h>

void troca_vizinhos(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int v[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10;
    for(int i = 0; i < n; i = i + 2){
        troca_vizinhos(&v[i], &v[i + 1]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    return 0;
}
