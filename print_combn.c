#include <unistd.h>

void					   put_int(int i);
void				   print_combn(int n);
int		 increment(int int_list[], int n);
int		 get_index(int int_list[], int n);
void	 print_int(int int_list[], int n);



void put_int(int i)
{
	write(1, &i, 1);
}

void print_int(int int_list[], int n)
{
	for (int i = 0; i < n; i++)
		put_int(int_list[i] + '0');
}

int get_index(int int_list[], int n)
{
	int max;
	max = 9;

	for (int i = 0; n + 1; i++)
		if (int_list[--n] < max - i)
			return n;

	return (-1);
}

int increment(int int_list[], int n)
{
	int pos_index;

	if ((pos_index = get_index(int_list, n)) == -1)
		return 0;

	int_list[pos_index]++;

	for (; pos_index < n; pos_index++)
		int_list[pos_index + 1] = int_list[pos_index] + 1;
	
	return 1;
}

void print_combn(int n)
{
	int my_list[n];

	if (n > 9 || 1 > n)
		return;

	for (int i = 0; i < n; i++)
		my_list[i] = i;

	do
	{
		print_int(my_list, n);
		write(1, "\n", 1);
	} while (increment(my_list, n));
}

int main()
{
	print_combn(3);
		
	return 0;
}