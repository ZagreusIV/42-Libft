/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:56:36 by mboudhar          #+#    #+#             */
/*   Updated: 2023/12/17 11:12:33 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
