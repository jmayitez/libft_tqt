/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 23:41:00 by bajouini          #+#    #+#             */
/*   Updated: 2018/12/07 23:41:00 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags_utils.h"
#include "libft.h"

int		is_valid_flag(char c)
{
	return (c == ' ' || c == '.' || c == '#' || c == '+' || c == '-'
			|| c == 'h' || c == 'l' || c == 'L' || ft_isdigit(c)
			|| c == 'z' || c == 'j' || c == 't');
}

int		is_valid_size_flag(char c)
{
	return (c == 'h' || c == 'l' || c == 'L'
			|| c == 'j' || c == 't' || c == 'z');
}
