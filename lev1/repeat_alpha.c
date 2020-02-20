#include <unistd.h>

void    repeat_alpha(char *str)
{
    int i = 0;
    int c = 0;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            c = str[i] - 95;
            while (--c)
                write(1, &str[i], 1);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            c = str[i] - 63;
            while (--c)
                write(1, &str[i], 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);
    write(1, "\n", 1);
    return (0);
}