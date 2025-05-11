// Capture the inputs comands
char	*row_coll(char *str, int n)
{
	char	len;
	char	*ptr;

	ptr = (char*) malloc(n * 1);
	len = '\0';
	while((n > len) && (*str != '0'))
	{
		if ((*str >= '0') && (*str <= '9'))
		{
			ptr[len] = *str;
			len++;
		}
		str++;
	}
	return (ptr);
}
