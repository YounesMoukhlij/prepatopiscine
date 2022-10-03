#include<stdio.h>


int ft_atoi(char *str)
{
	int sign;
	int r;
	r = 0;
	sign = 1;

	while(*str == ' ' || (*str >= 9 && 13 >= *str))
		str++;
	if(*str == '-')
	{
		sign = -1;
		str++;
	}
		if ( *str == '-' || *str == '+')
		str++;
	while ( *str >= '0' && '9' >= *str)
	{
		r = r * 10 + *str - 48;
		str++;
	}
	return(r * sign);
}
int main (void)
{
	char str[] = "-+-1999";
	printf("%d", ft_atoi(str));
	return 0;
}
