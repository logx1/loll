/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:46:25 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/13 21:46:41 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	size_t	i;

	i = ft_strlen(src);
	while (i > 0)
	{
		if (src[i] == (char)c)
		{
			return ((char *) &src[i]);
		}
		i--;
	}
	if (src[i] == (char)c)
		return ((char *) &src[i]);
	return (0);
}
