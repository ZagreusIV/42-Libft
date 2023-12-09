/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:45:31 by mboudhar          #+#    #+#             */
/*   Updated: 2023/12/03 12:37:56 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

char	*negative(long n, int d0)
{
	char	*s;
	int		i;

	s = (char *)malloc((d0 + 2) * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	s[0] = '-';
	n *= -1;
	while (i < d0)
	{
		s[d0 - i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	s[d0 + 1] = '\0';
	return (s);
}

char	*positive(long n, int d)
{
	char	*s;
	int		i;

	s = (char *)malloc((d + 1) * sizeof(char));
	if (!s)
		return (NULL);
	i = 1;
	while (i <= d)
	{
		s[d - i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	s[d] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	int	temp;
	int	digit_count;

	temp = n;
	digit_count = 0;
	if (temp == 0)
		digit_count = 1;
	while (temp != 0)
	{
		temp /= 10;
		digit_count++;
	}
	if (n >= 0)
		return (positive(n, digit_count));
	else if (n < 0)
		return (negative(n, digit_count));
	return (NULL);
}
/*int main()
{
    printf("%s", ft_itoa(-2147483648));
}*/
