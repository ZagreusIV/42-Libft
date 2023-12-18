#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*d;
	int		len;

	len = ft_strlen(src);
	d = (char *)malloc((len + 1) * sizeof(char));
	if (!d)
		return (0);
	ft_strlcpy(d, src, len + 1);
	return (d);
}
