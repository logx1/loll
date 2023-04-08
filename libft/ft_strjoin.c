/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:07:08 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/06 16:07:31 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*newstr;
	int		j;

	if (!s1 || !s2)
		return (0);
	newstr = malloc((ft_strlen(s1) + 1) + ft_strlen(s2));
	if (!newstr)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
