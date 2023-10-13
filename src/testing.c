#include "Sorting/Sorting.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void fillvector(int vector[]){
	for(int i = 0; i < SIZE; i++){
		int r = rand() % 50;
		vector[i] = r;
	}
}

void printvector(int vector[]){
	for(int i = 0; i < SIZE; i++){
		printf("%d ", vector[i]);
	}
	printf("\n");
}

int main(){
	int vector[SIZE];
	fillvector(vector);
	selectionsort(vector, SIZE);
	printf("SelectionSort: ");
	printvector(vector);

	fillvector(vector);
	insertionsort(vector, SIZE);
	printf("InsertioSort: ");
	printvector(vector);

	fillvector(vector);
	bubblesort(vector, SIZE);
	printf("BubbleSort: ");
	printvector(vector);
	
	return 0;
}



