/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 02:29:52 by bajouini          #+#    #+#             */
/*   Updated: 2018/11/30 02:29:52 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t		ft_putnstr(char *str, size_t n)
{
	size_t i;

	if (str == NULL)
		return (ft_putnstr("(null)", n));
	i = 0;
	while (str[i] && i < n)
		i++;
	write(1, str, i);
	return (i);
}
