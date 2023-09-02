#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max){
	if (min >= max){
		*range = 0;
		return 0;
	}
	int count = max - min;
	int* arr = (int*) malloc(count * 4);
	int i = min;
	while(i <= max){
		arr[i-min] = i;
		i++;
	}
	*range = arr;
	return count;
}