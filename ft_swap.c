/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 17:14:50 by bajouini          #+#    #+#             */
/*   Updated: 2018/12/19 17:14:51 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(void **str, void **str2)
{
	void *tmp;

	tmp = *str;
	*str = *str2;
	*str2 = tmp;
}