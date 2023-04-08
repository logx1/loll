/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:19:52 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/14 19:20:19 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			stlengh;
	char			*res;

	if (!f || !s)
		return (NULL);
	stlengh = ft_strlen(s);
	i = 0;
	res = (char *)malloc(sizeof(char ) * (stlengh + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
	res[i] = f(i, s[i]);
	i++;
	}
	res[i] = 0;
	return (res);
}
