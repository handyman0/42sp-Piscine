#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "btrack.c"
#include "valida_num.c"
#include "permutation.c"

int	main(int argc, char *argv[])
{
	//btrack(argv[1], atoi(argv[2]));
	//printf("%i\n", valida_num(argv[1], atoi(argv[2]), atoi(argv[3])));
	printf("Partida: %s \n", permutations_array(atoi(argv[1])));
	return argc;
}
