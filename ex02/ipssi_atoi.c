#include <unistd.h>

int	ipssi_atoi(char *str)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	k = 1;
	l = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\f')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	if (j % 2 != 0)
		k = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		l = l * 10 + (str[i] - '0');
		i++;
	}
	return (k * l);
}
