/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:58:21 by mboudhar          #+#    #+#             */
/*   Updated: 2023/11/05 22:02:26 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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
