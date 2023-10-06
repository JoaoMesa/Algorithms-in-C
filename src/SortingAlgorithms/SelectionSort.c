#include <stdio.h>
#include "Sorting.h"

void selectionsort(int vetor[], int n){
    int min, i, j;
    for(i = 0; i < n-1; i++){
        min = i;
        for (j = i+1; j<n-1; j++){
            if (vetor[j] < min){
                min = j;
            }
        }
        if (min != vetor[i]){
            int temp = vetor[i];
            vetor[i] = min;
            vetor[min] = temp;
        }
    }
}