/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 01:56:16 by bajouini          #+#    #+#             */
/*   Updated: 2018/11/19 01:56:16 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_floor(int min, int value)
{
	if (value < min)
		return (min);
	return (value);
}