#include "libft.h"

int	ft_set_char(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (s1[start] && ft_set_char(s1[start], set))
		start++;
	while (end > start && ft_set_char(s1[end - 1], set))
		end--;
	str = (char *)malloc((end - start + 1) * sizeof(*s1));
	if (!str)
		return (NULL);
	while (end > start)
	{
		str[i++] = s1[start++];
	}
	str[i] = '\0';
	return (str);
}
