/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 07:09:22 by bajouini          #+#    #+#             */
/*   Updated: 2018/11/06 07:09:23 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int i;
	int i2;

	i = 0;
	while (str1[i] != '\0')
	{
		i2 = 0;
		while (str1[i + i2] == str2[i2] && str1[i + i2])
			i2++;
		if (str2[i2] == '\0')
			return ((char*)str1 + i);
		i++;
	}
	if (str1[0] == '\0' && str2[0] == '\0')
		return ((char*)str1);
	return (NULL);
}
