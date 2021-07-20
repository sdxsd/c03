#include <stdio.h>

int ft_strlen(char *str)
{
    int iterator;

    iterator = 0;
    while (str[iterator] != '\0')
        iterator++;
    return(iterator);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
    return (dest);
}

int space_check(char *str)
{
    int iterator;

    iterator = 0;
    while (str[iterator] < 32)
    {
        iterator++;
    }
    return(iterator);
}

char *ft_strcat(char *dest, char *src)
{
    ft_strcpy(dest + ft_strlen(dest), src);
    return (dest);
}

char *alt_strcat(char *dest, char *src)
{
    while (*dest)
        dest++;
    while ((*dest++ = *src++) != 0);
    *dest++ = '\0';
    return (dest);
}

int main()
{
    char *str = " goed man!";
    char dest[20] = "lekker";
    ft_strcat(&dest[0], str);
    printf("%s\n", dest);
    return (0);
}
