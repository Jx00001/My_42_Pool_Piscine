void    ft_swap(int *a, int *b)
{
    int    p;

    p = *a;
    *a = *b;
    *b = p;
}

void    ft_rev_int_tab(int *tab, int size)
{
    int    cen1;
    int    i;
    int    j;

    i = 0;
    j = size - 1;
    cen1 = size / 2;
    while (i < cen1)
    {
        ft_swap(&tab[i], &tab[j]);
        i++;
        j--;
    }
}