/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 07:09:22 by bajouini          #+#    #+#             */
/*   Updated: 2018/11/06 07:09:23 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strcmp(const char *str1, const char *str2)
{
	unsigned int i;

	i = 0;
	if (str1 == str2)
		return (0);
	if (str1 == NULL)
		return (*str2);
	if (str2 == NULL)
		return (*str1);
	while (str1[i] && str1[i] == str2[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

unsigned int	ft_strlcmp(const char *str1, const char *str2)
{
	unsigned int i;

	i = 0;
	if (str1 == str2)
		return (0);
	if (str1 == NULL)
		return (*str2);
	if (str2 == NULL)
		return (*str1);
	while (str1[i] && str1[i] == str2[i])
		i++;
	if (str2[i] == 0)
		return (i);
	return (0);
}
