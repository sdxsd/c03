#include <stdio.h>

int ft_strcmp(char *s1, char *s2, unsigned int n)
{
    unsigned int iterator;
    int s1_score;
    int s2_score;

    iterator = 0;
    s1_score = 0;
    s2_score = 0;
    while(s1[iterator] != '\0' && iterator < n)
    {
        if (s2[iterator] == '\0')
            return (1);
        else if (s1[iterator] > s2[iterator])
            ++s1_score;
        else if (s2[iterator] > s1[iterator])
            ++s2_score;
        ++iterator;
        printf("[S1_SCORE: %d | S2_SCORE: %d]\n", s1_score, s2_score);
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
    char goed_string[] = "goed_string";
    char goed_string_niet[] = "goe_niet_string";
    unsigned int n = 4;
    printf("RESULT 1: %d\n", ft_strcmp(goed_string, goed_string_niet, n));
}
