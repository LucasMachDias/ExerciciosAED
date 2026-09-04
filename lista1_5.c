/*
Exercício 5. Implemente uma função void inverter(int *v, int n) que receba um vetor de inteiros e seu tamanho e inverta a ordem de seus elementos.
Exemplo:
● Antes: 10 20 30 40 50
● Depois: 50 40 30 20 10
A função deve modificar o próprio vetor, sem criar outro vetor auxiliar.
*/

//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---

#include <stdio.h>

// Inverte os elementos do proprio vetor, sem criar um vetor auxiliar.
// v recebe o endereco do primeiro elemento do vetor.
// n recebe a quantidade de elementos do vetor.
void inverter(int *v, int n){
    int temp; // Armazena temporariamente um valor durante a troca.

    // Basta percorrer a primeira metade: cada elemento e trocado com o correspondente do fim.
    for(int i = 0; i < n / 2; i++){
        temp = v[i]; // Guarda o elemento do inicio antes de sobrescreve-lo.
        v[i] = v[n - 1 - i]; // Coloca no inicio o elemento correspondente do final.
        v[n - 1 - i] = temp; // Coloca o elemento guardado no final.
    }
}

int main(){
    // Cria e inicializa um vetor com cinco elementos.
    int v[5] = {10, 20, 30, 40, 50};

    // Passa o vetor e seu tamanho para a funcao inverter.
    inverter(v, 5);

    // Percorre o vetor ja invertido e imprime cada elemento.
    for(int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }
    return 0; // Indica que o programa terminou corretamente.
}