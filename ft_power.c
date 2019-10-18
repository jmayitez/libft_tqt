/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:08:14 by bajouini          #+#    #+#             */
/*   Updated: 2018/11/06 17:08:15 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_power(int nb, int power)
{
	long	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
