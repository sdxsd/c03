// #include <stdio.h>
// #include <string.h>

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
	unsigned int	i;

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
	return (ft_strncpy(dest + ft_strlen(dest), src, nb));
}

/*
int main()
{
	char dest[20];
	char *src = "#%$#$#SC#%VDD#T$Tkhhjdkjfkljdklfdjk";

	//ft_strncat(dest, src, 20);
	printf("(dest: %s)\n", dest);
	ft_strncat(dest, src, 20);
	printf("(dest: %s)\n", dest);
}
*/