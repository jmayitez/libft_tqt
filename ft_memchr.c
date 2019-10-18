/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:14:19 by bajouini          #+#    #+#             */
/*   Updated: 2018/11/06 16:14:19 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char*)s;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return (src + i);
		i++;
	}
	return (NULL);
}
