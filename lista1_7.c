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
    temp = *a; // Armazena o valor do primeiro elemento em uma variável temporária.
    *a = *b; // Atribui o valor do segundo elemento ao primeiro.
    *b = temp; // Atribui o valor armazenado na variável temporária ao segundo elemento.
}

int main(){
    int v[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; // Cria e inicializa um vetor com dez elementos.
    int n = 10; // Define o tamanho do vetor.
    for(int i = 0; i < n; i = i + 2){ // Percorre o vetor de dois em dois elementos.
        troca_vizinhos(&v[i], &v[i + 1]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]); // Imprime os elementos do vetor após a troca.
    }
    return 0;
}