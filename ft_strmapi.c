/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:01:26 by bajouini          #+#    #+#             */
/*   Updated: 2018/11/06 19:01:26 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*output;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	output = (char*)malloc(ft_strlen(s) + 1);
	if (output == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		output[i] = f(i, s[i]);
		i++;
	}
	output[i] = '\0';
	return (output);
}
