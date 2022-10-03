#include<stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int a;

	ft_ft(&a);
	printf("%d\n", a);
}
