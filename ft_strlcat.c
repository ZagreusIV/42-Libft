#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	ns;
	unsigned int	nd;

	ns = ft_strlen(src);
	nd = ft_strlen(dest);
	i = 0;
	if (size - 1 < nd || size == 0)
		return (ns + size);
	while (src[i] != '\0' && (nd + i) < size - 1)
	{
		dest[nd + i] = src[i];
		i++;
	}
	dest[nd + i] = '\0';
	return (nd + ns);
}
