#include <stdlib.h>

int    ft_strlen(char *str)
{
    int    lenght;
    char *org;
    org = str;

    lenght = 0;
    while (*org != '\0')
    {
        lenght++;
        org++;
    }
    return (lenght);
}


char *ft_strdup(char *src)
{
    char *data = (char*) malloc(ft_strlen(src)+1);
    char    *destptr;
    destptr = data;

    while (*src != '\0')
    {
        *destptr = *src;
        destptr++;
        src++;
    }
    *destptr = '\0'; 
    return (data);
}
