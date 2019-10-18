/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:08:19 by bajouini          #+#    #+#             */
/*   Updated: 2018/11/06 17:08:20 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

unsigned int	ft_abs(int value)
{
	if (value == INT_MIN)
		return ((unsigned int)INT_MAX + 1);
	return (value > 0 ? value : -value);
}
