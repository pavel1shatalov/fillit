/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggerhold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 14:45:34 by ggerhold          #+#    #+#             */
/*   Updated: 2019/02/10 22:07:03 by ggerhold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "get_next_line.h"
# include "libft/libft.h"
# include <fcntl.h>

typedef struct	s_smth {
	int		la;
	int		bla;
}				t_smth;

int		ft_fchecker(char *file);
int		ft_mchecker(char *file);
int		ft_nbtetr(char *file);
int		get_next_line(const int fd, char **line);
int		*ft_coder(char *file);
char	*ft_map(size_t size);
char	*ft_filler(int *code);

#endif