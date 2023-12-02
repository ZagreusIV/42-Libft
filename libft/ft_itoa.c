/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:45:31 by mboudhar          #+#    #+#             */
/*   Updated: 2023/11/26 17:34:24 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, const char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}

size_t	nblen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (n *= -1);
	return (n);
}

char	*ft_strrev(char *str)
{
	size_t	i;
	char	temp;
	size_t	len;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;
	size_t	len;

	len = 0;
	neg = (n < 0);
	str = (char *)malloc((nblen(n) + 1 + neg) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		return (ft_strcpy(str, "0"));
	else if (neg)
		n = ft_abs(n);
	while (n != 0)
	{
		str[len++] = ft_abs((n % 10)) + '0';
		n /= 10;
	}
	if (neg)
		str[len++] = '-';
	ft_strrev(str);
	str[len] = '\0';
	return (str);
}

/*int main()
{
    printf("%s", ft_itoa(0));
}*/
