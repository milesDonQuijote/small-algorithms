#include "sorting.h"

void	swap_int(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	*sort_int(int	*list, int(cmp)(int, int), unsigned int size)
{
	unsigned int	index;
	unsigned int	jndex;

	index = 0;
	while (index < size)
	{
		jndex = index + 1;
		while (jndex < size)
		{
			if (!cmp(list[index], list[jndex]))
				swap_int(list + index, list + jndex);
			jndex++;
		}
		index++;
	}
	return (list);
}
