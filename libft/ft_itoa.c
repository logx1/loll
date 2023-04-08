/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:23:32 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/14 16:24:02 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_abs(long int nbr)
{
	if (nbr < 0)
	nbr = nbr * (-1);
	return (nbr);
}

int	digit_count(long int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	len = 1;
	while (nbr != 0)
	{
	nbr = nbr / 10;
	len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len;
	int		sign;
	char	*str;

	sign = 1;
	if (nbr < 0)
	sign = -1 ;
	len = digit_count(nbr);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
	str[len] = '0' + ft_abs(nbr % 10);
	nbr = ft_abs(nbr / 10);
	len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
