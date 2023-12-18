#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;

	i = 0;
	if (!ptr)
		return (0);
	while (i < num)
	{
		*(unsigned char *)(ptr + i) = (unsigned char)value;
		i++;
	}
	return (ptr);
}
