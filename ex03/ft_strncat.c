#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;

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

int main()
{
    unsigned int nb;
    char *str = " goed man!";
    char dest[20] = "lekker";
    nb = 4;
    ft_strncat(&dest[0], str, nb);
    printf("%s\n", dest);
    return (0);
}
