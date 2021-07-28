//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
		iterator++;
	return (iterator);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	ft_strncpy(dest + ft_strlen(dest), src, nb);
	return (dest);
}

/*
int main()
{
	char dest[20];
	char *src = "GWER#E$RGRED#$RT$FG$R@#$R#FERFWE$RRFWE";

	ft_strncat(dest, src, 4);
	printf("(dest: %s)\n", dest);
}
*/