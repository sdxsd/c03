// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
		iterator++;
	return (iterator);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	ft_strcpy(dest + ft_strlen(dest), src);
	return (dest);
}

/*
int main()
{
	char dest[20];
	char *src = "kjjkjkjkjkjkjk";

	ft_strcat(dest, src);
	printf("(dest: %s)\n", dest);
}
*/