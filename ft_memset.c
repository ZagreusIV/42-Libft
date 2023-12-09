/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:53:21 by mboudhar          #+#    #+#             */
/*   Updated: 2023/11/05 21:54:48 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;

	i = 0;
	if (!ptr)
		return (0);
	while (i < num)
	{
		*(unsigned char *)(ptr + i) = (unsigned char)value;
		i++;
	}
	return (ptr);
}
/*int main() {
    char str[12] = "testingstuff";

    ft_memset(str, '$', 8);
    printf("%s\n", str);

    return 0;
}*/
