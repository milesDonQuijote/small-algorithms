#include "sorting.h"
#include <stdio.h>

void	swap_int(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	swap_string(char** a, char** b)
{
	char*	temp;

	temp  = *a;
	*a = *b;
	*b = temp;
}

int*	sort_int(int* list, int(cmp)(int, int), unsigned int size)
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

char**	sort_string(char **list, int(cmp)(const char*, const char*), unsigned int size)
{
	unsigned int	index;
	unsigned int	jndex;

	index = 0;
	while (index < size)
	{
		jndex = index + 1;
		while (jndex < size)
		{
			if (cmp((const char*)list[index], (const char*)list[jndex]) > 0)
				swap_string(list + index, list + jndex);
			jndex++;
		}
		index++;
	}
	return (list);
}
