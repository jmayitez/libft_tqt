/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 03:39:07 by bajouini          #+#    #+#             */
/*   Updated: 2019/01/24 03:39:07 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_free_tab(char **tab)
{
	unsigned int	i;

	if (tab == 0)
		return ;
	i = 0;
	while (tab[i])
	{
		ft_strdel(&tab[i]);
		++i;
	}
	free(tab);
}

char	**reverse_free_tab(char **tab, int size)
{
	if (tab == 0)
		return (NULL);
	while (size >= 0)
		free(tab[--size]);
	free(tab);
	return (NULL);
}
