/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charset_match.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 10:16:09 by bajouini          #+#    #+#             */
/*   Updated: 2019/01/25 10:16:09 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		charset_match(char *charset, char *str)
{
	unsigned int	i;

	while (*str)
	{
		i = 0;
		while (charset[i] && charset[i] == *str)
			++i;
		if (charset[i] != '\0')
			return (0);
		++str;
	}
	return (1);
}

int		charset_unmatch(char *charset, char *str)
{
	unsigned int	i;

	while (*str)
	{
		i = 0;
		while (charset[i] && charset[i] != *str)
			++i;
		if (charset[i] != '\0')
			return (0);
		++str;
	}
	return (1);
}
