#include <stdio.h>

int ft_strlen(char *str)
{
    int iterator;

    iterator = 0;
    while (str[iterator] != '\0')
        iterator++;
    return(iterator);
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
    int iterator;
    int s_iterator;
    int free_space;
    int src_len;

    s_iterator = 0;
    src_len = ft_strlen(src);
    free_space = ft_strlen(dest) - space_check(dest);
    printf("FREE_SPACE: [%d]\n", free_space);
    //printf("ITERATOR = %d | S_ITERATOR = %d | SRC_LEN = %d", iterator, s_iterator, src_len);
    if (free_space >= src_len)
    {
        iterator = free_space;
        while (iterator <= src_len * 2)
        {
            dest[iterator] = src[s_iterator];
            ++iterator;
            ++s_iterator;
            printf("%s\n", dest);
        }
        return (dest);
    }
    return ("goed");
}

int main()
{
    char *str = "goed";
    char dest[8] = "lekk";
    ft_strcat(str, &dest[0]);
}
