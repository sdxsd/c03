// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	iterator;

	iterator = 0;
	while (*dest)
		dest++;
	while (iterator != nb && src[iterator] != '\0')
	{
		*dest++ = *src++;
		iterator++;
	}
	*dest++ = '\0';
	return (dest);
}

/*
int main()
{
	char dest[20];
	char *src = "wat blij!";

	ft_strncat(dest, src, 3);
	printf("(dest: %s)\n", dest);
}
*/