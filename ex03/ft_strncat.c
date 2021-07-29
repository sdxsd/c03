// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				iterator;
	unsigned int	iterator2;

	iterator = 0;
	iterator2 = 0;
	while (dest[iterator] != '\0')
		iterator++;
	while (iterator2 < nb && src[iterator2] != '\0')
	{
		dest[iterator] = src[iterator2];
		iterator++;
		iterator2++;
	}
	dest[iterator] = '\0';
	return (dest);
}

/*
int main()
{
	char dest[20] = "kdjkfdj";
	char *src = "#%$#$";

	//ft_strncat(dest, src, 5);
	printf("(dest: %s)\n", dest);
	ft_strncat(dest, src, 20);
	printf("(dest: %s)\n", dest);
}
*/