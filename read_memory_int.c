/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_memory_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 23:56:34 by bajouini          #+#    #+#             */
/*   Updated: 2018/12/07 23:56:35 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		read_char(void *n)
{
	return (*(char*)n);
}

short		read_short(void *n)
{
	return (*(short*)n);
}

int			read_int(void *n)
{
	return (*(int*)n);
}

long		read_long(void *n)
{
	return (*(long*)n);
}

long long	read_llong(void *n)
{
	return (*(long long*)n);
}
