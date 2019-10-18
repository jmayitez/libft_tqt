/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 20:23:16 by bajouini          #+#    #+#             */
/*   Updated: 2018/12/19 20:23:17 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void					*ft_memdup(const void *src, size_t size)
{
	char	*out;

	if (size == 0 || (out = malloc(size)) == 0)
		return (NULL);
	ft_memcpy(out, src, size);
	return (out);
}
