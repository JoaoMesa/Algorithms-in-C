#include <stdio.h>
#include "SortingAlgorithms/Sorting.h"

int main(){
	int vetorselection[10];
	for(int i = 0; i < 10; i++){
		vetorselection[i] = 9-i;
	}
	
	printf("Vetor selection: ");
	selectionsort(vetorselection, 10);
	for(int i = 0; i < 10; i++){
		printf("%d ", vetorselection[i]);
	}
	
	return 0;
}
