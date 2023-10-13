#include <stdio.h>
#include "Sorting.h"


void bubblesort(int vetor[], int n){
    int i, j;
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i - 1; j++){
            if (vetor[j] > vetor[j+1]){
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}