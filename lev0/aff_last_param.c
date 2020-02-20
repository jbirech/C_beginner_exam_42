#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_first_param(char *str)
{
	int i = 0;

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if(ac > 1)
		aff_first_param(av[ac - 1]);
	ft_putchar('\n');
	return (0);
}
