int	ft_strcmp(char *s1, char *s2)
{
	int	iterator;
	int	s1_score;
	int	s2_score;

	s1_score = 0;
	s2_score = 0;
	iterator = 0;
	while (s1[iterator] != '\0' || s2[iterator] != '\0')
	{
		if (s1[iterator] == s2[iterator])
			continue ;
		else if (s1[iterator] > s2[iterator])
			s1_score++;
		else if (s1[iterator] < s2[iterator])
			s2_score++;
		iterator++;
	}
	if (s1_score == s2_score)
		return (0);
	if (s1_score > s2_score)
		return (1);
	else
		return (-1);
}

int main()
{
	char string[] = "goed";
	char string2[] = "goed";
	char string3[] = "baaaaaaah";
	printf("%d\n", ft_strcmp(string, string2));
	printf("%d\n", ft_strcmp(string2, string3));
	printf("%d\n", ft_strcmp(string, string3));
}
