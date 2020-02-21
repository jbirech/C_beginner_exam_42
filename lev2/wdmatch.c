#include <unistd.h>
​
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
​
void	wdmatch(char *src, char *match)
{
	char *res;
	int i;
	int j;
	int k;
	int flag;
​
	i = 0;
	j = 0;
	k = 0;
	flag = 0;
	res = &match[j];
	while (src[i] != '\0')
	{
		if (src[i] == match[j])
		{
			flag = 1;
			res[k] = match[j];
			k++;
			j++;
		}
		else
			flag = 0;
		if (match[j] == '\0')
			break ;
		i++;
	}
	if (flag)
		ft_putstr(res);
	return ;
}
​
int		main(int argc, char *argv[])
{
	if (argc == 3)
		wdmatch(argv[2], argv[1]);
	write(1, "\n", 1);
	return (0);
}