#include <unistd.h>
#include <stdio.h>

int if_in(char s1, char **s2){
	char *ptr2 = s2[2];

	while(*ptr2 != '\0'){
		if (s1 == *ptr2){
			return 1;
		}
		ptr2++;
	}
	return 0;
}

int main(int argc, char *argv[])
{
	int i = 0;
	int lim = 0;
	char x[10] = "";
	char *ptr = &x;
	int ind = 0;
	if (argc != 3){
		write(1, "\n", 1);
		return 0;
	}
	while(argv[1][i] != '\0'){
		if(if_in(argv[1][i], argv) == 1){
			x[lim] = argv[1][i];
			lim++;
		}
		else{
			write(1, "\n", 1);
			return 0;
		}
		i++;
	}
	x[lim] = '\0';
	while(ind <= lim){
		write(1, &ptr[ind], 1);
		ind++;
	}
	write(1, "\n", 1);
	return 0;
}