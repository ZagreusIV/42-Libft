#include "libft.h"

char	*ft_substr(const char *str, size_t start, size_t len)
{
	size_t	str_len;
	size_t	i;
	char	*sub;

	i = 0;
	str_len = ft_strlen(str);
	if (!str)
		return (NULL);
	if (start > str_len)
		return (ft_strdup(""));
	if (start + len > str_len)
		len = str_len - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (0);
	while (i < len)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}
