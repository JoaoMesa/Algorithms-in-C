#include <stdio.h>
#include "SortingAlgorithms/Sorting.h"
#define SIZE 10

void fillvector(int vector[]){
	for(int i = 0; i < SIZE; i++){
		vector[i] = 9-i;
	}
}

void printvector(int vector[]){
	for(int i = 0; i < SIZE; i++){
		printf("%d ", vector[i]);
	}
}


int main(){
	int vetorselection[SIZE];
	fillvector(vetorselection);
	
	selectionsort(vetorselection, SIZE);

	printvector(vetorselection);
	
	return 0;
}

