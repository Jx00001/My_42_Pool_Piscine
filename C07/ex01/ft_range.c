#include <stdlib.h>

int* ft_range(int min, int max){
	if (min >= max)
		return 0;
	int count = max - min;
	int* arr = (int*) malloc(count * 4);
	int i = min;
	while(i <= max){
		arr[i-min] = i;
		i++;
	}
	return arr;
}