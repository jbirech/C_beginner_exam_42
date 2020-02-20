#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void maff_alpha()
{
	int i = 'z';
	int j = 'Y';

	while(i >= 'a' && j >= 'A')
	{
		ft_putchar(i);
		ft_putchar(j);
		j-=2;
		i-=2;
	}
}

int main()
{
	maff_alpha();
	ft_putchar('\n');
	return(0);
}
