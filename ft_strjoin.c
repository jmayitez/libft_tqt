/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:11:30 by bajouini          #+#    #+#             */
/*   Updated: 2018/11/06 19:11:31 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*output;
	unsigned int	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1);
	output = (char*)malloc(len + ft_strlen(s2) + 1);
	if (output == NULL)
		return (NULL);
	ft_strcpy(output, s1);
	ft_strcpy(output + len, s2);
	return (output);
}
