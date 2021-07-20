#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int count;
    int loop_c;
    int first_m;

    if (to_find == 0)
        return (str);
    count = 0;
    while((str++) != 0)
    {
        if(str == to_find)
        {
            if (first_m)
                first_m = loop_c;
            ++to_find;
            ++count;
            ++loop_c;
        }
        to_find -= count;
        count = 0;
        ++loop_c;
        first_m = 0;
    }
    if (count)
        return (NULL);
    return (&str[first_m]);
}

int main()
{
    char *str = "wel leuk, piemol";
    char *to_find = "leuk";

    printf("%s\n", ft_strstr(str, to_find));
}
