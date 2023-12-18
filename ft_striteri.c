#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (str && f)
	{
		while (*(str))
		{
			f(i, str);
			i++;
			str++;
		}
	}
}
