/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 07:09:22 by bajouini          #+#    #+#             */
/*   Updated: 2018/11/06 07:09:23 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t		ft_putstr(char const *s)
{
	size_t len;

	if (s == NULL)
		return (ft_putstr("(null)"));
	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}
