/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:51:04 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/15 21:51:33 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*subst;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (s_len < len)
		len = s_len;
	i = 0;
	if (!s)
		return (0);
	subst = malloc(sizeof(char) * (len + 1));
	if (subst == 0)
		return (0);
	while (i < len && start < ft_strlen(s))
	{
		subst[i] = s[start];
		i++;
		start++;
	}
	subst[i] = '\0';
	return (subst);
}
