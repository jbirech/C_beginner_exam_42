#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *str)
{
	int i = 0;
	
	while(str[i])
	{
		if (str[i] == 'a')
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac ==2)
		aff_a(av[1]);
	ft_putchar('\n');
	return(0);
}
