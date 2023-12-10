/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:54:42 by mboudhar          #+#    #+#             */
/*   Updated: 2023/11/06 23:22:01 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_len;
	size_t	needle_len;
	size_t	i;
	size_t	j;

	i = 0;
	haystack_len = 0;
	needle_len = ft_strlen(needle);
	if (!haystack || !needle)
		return (NULL);
	while (haystack[haystack_len] && haystack_len < len)
		haystack_len++;
	if (!needle[0])
		return ((char *)haystack);
	while (i < haystack_len)
	{
		j = 0;
		while (haystack[i + j] && needle[j]
			&& i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
