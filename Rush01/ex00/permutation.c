// Swap integers to permutation:
// Ex: "1234" => "2134"

void	swap(char *first, char *second)
{
	char	temp;

	temp = *first;
	*first = *second;
	*second = temp;
}
// To calculate factorial to malloc array_permutation
int	factorial(int n)
{
	int	i;
	int	fact;

	fact = 1;
	i = 1;
	while (i <= n)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
// A function to permutation a array until end
void	permute(char *arr, int start, int end)
{
	int	interation;

	if (start == end)
	{
		printf("%s \n", arr);
	}
	interation = start;
	while (interation <= end)
	{
		swap(&arr[start], &arr[interation]);
		permute(arr, start + 1, end);
		swap(&arr[start], &arr[interation]);
		interation++;
	}
}
// Where all permutations will generation
char	*permutations_array(int n)
{
	char	*permu;
	char	interation;
	char	start;

	permu = (char *) malloc (n * 1);
	interation = '\0';
	start = '1';
	while (interation < n)
	{
		permu[interation] = start;
		start++;
		interation++;
	}
	permute(permu, 0, n - 1);
	return (permu);
}
