// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	iterator;

	iterator = 0;
	while (*dest)
		dest++;
	while (iterator != nb && src[iterator] != '\0')
	{
		dest[iterator] = src[iterator];
		iterator++;
	}
	dest[iterator] = '\0';
	return (dest);
}

/*
int main()
{
	char dest[20];
	char *src = "GWER#E$RGRED#$RT$FG$R@#$R#FERFWE$RRFWE";

	ft_strncat(dest, src, 1);
	printf("(dest: %s)\n", dest);
}
*/