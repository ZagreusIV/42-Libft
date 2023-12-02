/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:29:40 by mboudhar          #+#    #+#             */
/*   Updated: 2023/11/26 15:44:27 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

/*int main() {
    const char *str = "12345";
    int result = atoi(str);
    printf("\n%d", result);

    str = "   -2342521";
    result = atoi(str);
    printf("\n%d", result);

    str = " 7765";
    result = atoi(str);
    printf("\n%d", result);

    str = "++==+7765";
    result = atoi(str);
    printf("\n%d", result);
    return 0;
}*/
