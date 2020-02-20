#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    search_and_replace(char *str, char *c, char *d)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i])
    {
        if (c[j] == str[i])
        {
            d[k] = str[i]
            ft_putchar(str[i])
            k++;
        }
        i++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 4)
        search_and_replace(av[1], av[2], av[3]);
    write(1, "\n", 1);
    return (0);
}