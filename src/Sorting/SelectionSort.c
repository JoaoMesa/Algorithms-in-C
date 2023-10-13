#include <stdio.h>
#include "Sorting.h"

void selectionsort(int vetor[], int n) {
    int min, i, j;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) { 
            if (vetor[j] < vetor[min]) { 
                min = j;
            }
        }
        if (min != i) {
            int temp = vetor[i];
            vetor[i] = vetor[min]; 
            vetor[min] = temp;    
        }
    }
}