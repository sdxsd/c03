char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (*dest)
		dest++;
	while (i != nb)
	{
		if ((*dest++ = *src++) == 0)
			break;
		i++;
	}
	*dest++ = '\0';
	return (dest);
}
