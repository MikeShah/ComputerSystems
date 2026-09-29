#include "sum.h"
int sum(int* array, int size){
	int total=0;
	for(int i=0; i < size; i++){
		total += array[i];
	}
	return total;
}
