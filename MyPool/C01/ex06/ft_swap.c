#include<stdio.h>

void ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int a = 10;
	int b = 4;
//	int *y,*u;
	ft_swap(&a,&b);
	printf("la nouvelle a est : '%d',et la nouvelle b est '%d'\n",a,b);
}
