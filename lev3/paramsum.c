#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if (n > 9)
    {
        ft_putnbr(n /10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n + '0');
}

int     main(int ac, char **av)
{
    int x;
    av[1] = "0";
    x = ac - 1;
    if (x >= 0)
        ft_putnbr(x);
    write(1, "\n", 1);
    return (0);
}