// Main algoritm of backtracking
#include "row_coll.c"

void	btrack(char *str, int n)
{
	char	*collup;
	char	*colldown;
	char	*rowleft;
	char	*rowright;

	collup = row_coll(str, n);
	colldown = row_coll(str + n*2, n);	
	rowleft = row_coll(str + n*4,  n);
	rowright = row_coll(str + n*6, n);

	printf("%s %s %s %s \n", collup, colldown, rowleft, rowright);
}
