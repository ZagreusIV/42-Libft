#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t	i;

	i = 0;
	if (!ptr)
		return (0);
	while (i < num)
	{
		if (*(unsigned char *)(ptr + i) == (unsigned char)value)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
