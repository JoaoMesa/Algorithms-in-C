#include <stdio.h>
#include "Sorting.h"


void insertionsort(int vetor[], int n){
    int i, j, min;
    for(i = 1; i < n; i++){
        min = vetor[i];
        j = i-1;

        while (j >= 0 && vetor[j] > min)
        {
            vetor[j+1] = vetor[j];
            j = j-1;
        }
        vetor[j+1] = min;
    }
}