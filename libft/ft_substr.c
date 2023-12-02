/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:59:46 by mboudhar          #+#    #+#             */
/*   Updated: 2023/11/06 20:00:58 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(const char *str, size_t start, size_t len)
{
	size_t	str_len;
	size_t	i;
	char	*sub;

	i = 0;
	str_len = ft_strlen(str);
	if (!str)
		return (NULL);
	if (start >= str_len)
		return (NULL);
	if (start + len > str_len)
		len = str_len - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
	{
		return (0);
		exit(1);
	}
	while (i < len)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}

/*int main() {
    const char *str = "This is a sample string";
    size_t start = 5;
    size_t len = 7;

    char *result = ft_substr(str, start, len);

    if (result != NULL) {
        printf("Substring: %s\n", result);
        free(result);
    } else {
        printf("Invalid range for substring\n");
    }

    return 0;
}*/
