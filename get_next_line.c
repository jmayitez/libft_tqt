/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:25:04 by bajouini          #+#    #+#             */
/*   Updated: 2018/11/11 16:25:04 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

static int		copy_line(char **line, char **prevbuffer)
{
	char	*tmp;

	*line = ft_strsub(*prevbuffer, 0,
		(size_t)ft_strchr(*prevbuffer, '\n') - (size_t)*prevbuffer);
	if (*line == NULL)
	{
		ft_strdel(prevbuffer);
		return (-1);
	}
	tmp = *prevbuffer;
	*prevbuffer = ft_strdup(ft_strchr(*prevbuffer, '\n') + 1);
	free(tmp);
	return (*prevbuffer == NULL ? -1 : 1);
}

static int		copy_rest(char **line, char **prevbuffer)
{
	if (*prevbuffer != NULL && ft_strlen(*prevbuffer) == 0)
	{
		ft_strdel(prevbuffer);
		return (0);
	}
	*line = *prevbuffer;
	*prevbuffer = NULL;
	return (1);
}

static int		copy_str(char **line, char **prevbuffer)
{
	if (ft_strchr(*prevbuffer, '\n') != NULL)
		return (copy_line(line, prevbuffer));
	return (copy_rest(line, prevbuffer));
}

int				gnlerror(char **prevbuffer)
{
	ft_strdel(prevbuffer);
	return (-1);
}

int				get_next_line(const int fd, char **line)
{
	int				ret;
	char			buffer[BUFF_SIZE + 1];
	static char		*prevbuffer = NULL;
	unsigned int	len;

	if (fd < 0 || line == 0 || BUFF_SIZE <= 0 || (len = 0))
		return (gnlerror(&prevbuffer));
	if ((!prevbuffer || ft_strchr(prevbuffer, '\n') == NULL) && (ret = 1))
	{
		ft_bzero(buffer, BUFF_SIZE + 1);
		while (ft_strchr(prevbuffer, '\n') == NULL && ret > 0)
		{
			ret = read(fd, buffer, BUFF_SIZE);
			buffer[ft_floor(0, ret)] = '\0';
			if ((len += ret) > INT_MAX || (ret >= 0
				&& !(prevbuffer = ft_strjoinfree(prevbuffer, buffer))))
				return (gnlerror(&prevbuffer));
		}
		if (ret == -1)
		{
			ft_strdel(&prevbuffer);
			return (-1);
		}
	}
	return (copy_str(line, &prevbuffer));
}
