/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:30:56 by mboudhar          #+#    #+#             */
/*   Updated: 2023/11/26 18:07:43 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (str && f)
	{
		while (*(str))
		{
			f(i, str);
			i++;
			str++;
		}
	}
}

/*#include <stdio.h>

void my_function(char *c) {
    *c = 'X';
}

int main() {
    char my_string[] = "Hello, World!";
    printf("Before: %s\n", my_string);

    ft_striter(my_string, my_function);

    printf("After:  %s\n", my_string);

    return 0;
}*/