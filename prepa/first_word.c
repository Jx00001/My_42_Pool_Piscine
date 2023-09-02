#include <unistd.h>

int main(int argc, char const *argv[])
{
	int start = 0;
	int end = 0;

	if (argc != 2){
		write(1, "\n", 1);
		return 0;
	}

	while(argv[1][start] == ' ' || argv[1][start] == '\t'){
		start++;
	}

	end = start;

	while(argv[1][end] != ' ' && argv[1][end] != '\t'){
		end++;
	}

	while(start < end){
		write(1, &argv[1][start], 1);
		start++;
	}

	write(1, "\n", 1);

	return 0;
}