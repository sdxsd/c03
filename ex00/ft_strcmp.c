// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	iterator;

	iterator = 0;
	while (s1[iterator] != '\0' && s2[iterator] != '\0')
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
	char *str1 = "goed_gecharred";
	char *str2 = "goed_gecharred";
	char *str3 = "jefkjjjjdj";
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str2, str3));
	printf("%d\n", ft_strcmp(str3, str1));
	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", strcmp(str2, str3));
	printf("%d\n", strcmp(str3, str1));
}
*/