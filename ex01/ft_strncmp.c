//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	iterator;

	iterator = 0;
	while ((s1[iterator] != '\0' || s2[iterator] != '\0') \
	&& iterator < n)
	{
		if (s1[iterator] != s2[iterator])
			return ((s1[iterator] - s2[iterator]));
		++iterator;
	}
	return (0);
}

/*
int main()
{
	char *str1 = "";
	char *str2 = "a";
	char *str3 = "jefkjjjjdj";
	printf("%d\n", ft_strncmp(str1, str2, 5));
	printf("%d\n", ft_strncmp(str2, str3, 5));
	printf("%d\n\n", ft_strncmp(str3, str1, 5));
	printf("%d\n", strncmp(str1, str2, 5));
	printf("%d\n", strncmp(str2, str3, 5));
	printf("%d\n", strncmp(str3, str1, 6));
}
*/
