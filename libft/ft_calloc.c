/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:34:12 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/13 23:34:56 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*rut;

	rut = malloc(count * size);
	if (!rut)
		return (0);
	ft_bzero(rut, count * size);
	return (rut);
}
