#include "Sorting/Sorting.h"
#include <stdio.h>
#define SIZE 10

void fillvector(int vector[]){
	for(int i = 0; i < SIZE; i++){
		vector[i] = 10-i;
	}
}

void printvector(int vector[]){
	for(int i = 0; i < SIZE; i++){
		printf("%d ", vector[i]);
	}
	printf("\n");
}

int main(){
	int vetorselection[SIZE];
	fillvector(vetorselection);
	
	selectionsort(vetorselection, SIZE);

	printf("SelectionSort: ");
	printvector(vetorselection);
	
	return 0;
}



