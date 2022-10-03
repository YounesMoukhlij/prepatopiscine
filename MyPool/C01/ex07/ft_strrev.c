#include<stdio.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		{
			i++;
		}
	return(i);
}

char *ft_strrev(char *str)
{
	int l;
	int i = 0;
	char t;
	l = ft_strlen(str) - 1;
	while (i < l)
		{
			t = str[l];
			str[l] = str[i];
			str[i] = t;
			i++;
			l--;
		}
	return (str);
}
int main(void)
{

	char str[] = "-Younes & Moukhlij-";
	printf("%s",ft_strrev(str));
	
}

