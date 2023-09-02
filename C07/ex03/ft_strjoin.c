#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	l;

	l = 0;
	while (*str != '\0')
	{
		l++;
		str++;
	}
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}


char *ft_strjoin(int size, char **strs, char *sep) {
    int total = 0;
    int i = 0;

    if (size <= 0) {
        char *null = (char*) malloc(1);
        *null = '\0';
        return null;
    }

    while (i < size) {
        total += ft_strlen(strs[i]);
        i++;
    }

    char *result = (char *)malloc(total + (size - 1) * ft_strlen(sep) + 1);
    *result = '\0';
    i = 0;

    while (i < size) {
        ft_strcat(result, strs[i]);
        if (i < size - 1) {
            ft_strcat(result, sep);
        }
        i++;
    }

    return result;
}

