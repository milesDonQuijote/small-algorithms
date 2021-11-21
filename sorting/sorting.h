#ifndef _sorting_h_
# define _sorting_h

void	swap_int(int *a, int *b);
int	*sort_int(int *list, int(cmp)(int, int), unsigned int size);

#endif
