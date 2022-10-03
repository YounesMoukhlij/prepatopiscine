#include<unistd.h>
void ft_print_alphabet(void)
{
	char i,x;
	i = 'a';
	x = 'A';

	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
	while (x <= 'Z')
	{
		write(1, &x, 1);
		x++;
	}
	write(1, "\n", 1);	
}
int main ()
{
	ft_print_alphabet();
}
