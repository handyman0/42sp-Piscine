// Code to validation a line
int	valida_num(char *str, int level, int n)
{
	int	occ;
	int	i;
	char	min;

	occ = 1;
	min = str[0];
	i = 0;
	while(n > i)
	{
		if (min < str[i])
		{
			occ++;
			min = str[i];
			if (occ > level)
			{
				break;
			}
		}
		i++;
	}
	return (occ == level);
}
