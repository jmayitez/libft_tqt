/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:33:18 by bajouini          #+#    #+#             */
/*   Updated: 2018/11/06 19:33:19 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putendl_fd(char const *s, int fd)
{
	size_t i;

	i = ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return (i + 1);
}
