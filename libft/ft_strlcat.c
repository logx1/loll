/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:16:42 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/14 14:16:59 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_lenght_min(size_t size1, size_t size2)
{
	if (size1 < size2)
		return (size1);
	return (size2);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	if ((!src || !dest) && dstsize == 0)
		return (0);
	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len + str_lenght_min(dest_len, dstsize));
	while (src[i] && dest_len + i < dstsize -1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (src_len + str_lenght_min(dest_len, dstsize));
}
