/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 05:08:51 by bajouini          #+#    #+#             */
/*   Updated: 2018/11/07 05:08:51 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtolower(char *string)
{
	unsigned int	i;

	if (string == NULL)
		return (NULL);
	i = 0;
	while (string[i])
	{
		string[i] = ft_tolower(string[i]);
		i++;
	}
	return (string);
}
