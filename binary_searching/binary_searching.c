#include <string.h>
#include "../headers.h"

int cmp(int a, int b)
{
	return a < b;
}

int	b_search_int(int find, int *list, unsigned int size)
{
	unsigned int	min;
	unsigned int	max;
	unsigned int	current;

	min = 0;
	max = size - 1;
	while (min <= max)
	{
		current = (min + max) / 2;
		if (find > list[current])
			min = current + 1;
		else if (find < list[current])
			max = current - 1;
		else
			return (current);
	}
	return (-1);
}

int	b_search_string(char *find, char **list, unsigned int size)
{
	unsigned int	min;
	unsigned int 	max;
	unsigned int	current;

	min = 0;
	max = size - 1;
	while (min <= max)
	{
		current = (min + max) / 2;
		if (strcmp((const char*)find, (const char*)list[current]) > 0)
			min = current + 1;
		else if (strcmp((const char*)find, (const char*)list[current]) < 0)
			max = current - 1;
		else
			return (current);
	}
	return (-1);
}
