/*
Exercício 5. Implemente uma função void inverter(int *v, int n) que receba um vetor de inteiros e seu tamanho e inverta a ordem de seus elementos.
Exemplo:
● Antes: 10 20 30 40 50
● Depois: 50 40 30 20 10
A função deve modificar o próprio vetor, sem criar outro vetor auxiliar.
*/

//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---

#include <stdio.h>

void inverter(int *v, int n){
    int temp;
    for(int i = 0; i < n / 2; i++){
        temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }
}

int main(){
    int v[5] = {10, 20, 30, 40, 50};
    inverter(v, 5);

    for(int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }
    return 0;
}
