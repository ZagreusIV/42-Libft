/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:23:59 by mboudhar          #+#    #+#             */
/*   Updated: 2023/11/06 23:26:59 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	charcmp(char s1, char s2)
{
	if ((unsigned char)s1 != (unsigned char)s2)
		return ((unsigned char)s1 - (unsigned char)s2);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s2[i] && s1[i] && i < n)
	{
		if (charcmp(s1[i], s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (charcmp(s1[i], s2[i]));
	return (0);
}
