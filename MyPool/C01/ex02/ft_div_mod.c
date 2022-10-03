#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;


}
int main()
{
	int d;
	int m;

	ft_div_mod(10,2,&d,&m);
	printf("%d, %d",d,m);

}
