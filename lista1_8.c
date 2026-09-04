/*
Exercício 8. 
Implemente uma função void min_max(int *v, int n, int *min, int *max) que receba um vetor de inteiros e seu 
tamanho e armazene, nas variáveis apontadas por min e max, o menor e o maior elemento do vetor.
*/

//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---

#include <stdio.h>

void min_max(int *v, int n, int *min, int *max){
    *min = v[0];
    *max = v[0];
    for(int i = 0; i < n; i++){
        if(v[i] < *min){
            *min = v[i];
        }
        if(v[i] > *max){
            *max = v[i];
        }
    }
}

int main(){
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int min, max;
    min_max(v, 10, &min, &max);
    printf("Min: %d, Max: %d\n", min, max);
}
