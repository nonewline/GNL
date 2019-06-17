/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:11:36 by mimeyer           #+#    #+#             */
/*   Updated: 2019/06/17 10:38:44 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1
# include "libft/libft.h"
# include <fcntl.h>

char	*get_line(char *dest, char *src);
char	*remove_line(char *str);
int		get_next_line(const int fd, char **line);

#endif
