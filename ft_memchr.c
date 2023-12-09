/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:35:45 by mboudhar          #+#    #+#             */
/*   Updated: 2023/11/05 21:47:10 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t	i;

	i = 0;
	if (!ptr)
		return (0);
	while (i < num)
	{
		if (*(unsigned char *)(ptr + i) == (unsigned char)value)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/*int main() {
    const char str[] = "Hello, World!";
    char *ptr;

    // Using our custom myMemchr function
    ptr = ft_memchr(str, 'W', sizeof(str));

    if (ptr != NULL) {
        printf("Found at position: %ld\n", (long int)(ptr - str));
    } else {
        printf("Not found\n");
    }

    return 0;
}*/
