#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int iterator;
    int s1_score;
    int s2_score;

    iterator = 0;
    s1_score = 0;
    s2_score = 0;
    while(s1[iterator] != '\0')
    {
        if (s2[iterator] == '\0')
            return (1);
        else if (s1[iterator] > s2[iterator])
            ++s1_score;
        else if (s2[iterator] > s1[iterator])
            ++s2_score;
        ++iterator;
    }
    if (s1_score > s2_score)
        return (1);
    else if (s2_score > s1_score)
        return (-1);
    else if (s1_score == s2_score)
        return (0);
    else
        return (3);
}

int main()
{
    char string1[] = "str";
    char string2[] = "str";

    printf("STRING 1 IS: %d\n", ft_strcmp(string1, string2));
}
