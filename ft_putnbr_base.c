/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 14:33:42 by bajouini          #+#    #+#             */
/*   Updated: 2018/12/11 14:33:43 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(unsigned int nbr, unsigned int base)
{
	if (base > 16 || base <= 1)
		base = 16;
	if (nbr >= base)
		ft_putnbr_base(nbr / base, base);
	ft_putchar(BASE_HEX[nbr % base]);
}
