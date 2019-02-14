/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggerhold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:53:01 by ggerhold          #+#    #+#             */
/*   Updated: 2019/02/14 14:05:08 by ggerhold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_fill(int *code, char *map, int n)
{
	int		nb;
	int		i;

	nb = ft_nblock(code, n);
	printf("%d\n", nb + 1);
	i = 0;
	// check for addresses
	while (map[i])
	{
		if (map[i] == '.' \
				&& map[i + *(code)] == '.' \
				&& map[i + *(code) + *(code + 1)] == '.' \
				&& map[i + *(code) + *(code + 1) + *(code + 2)] == '.') 
		{
			map[i] = 'A' + nb;
			map[i + *(code)] = 'A' + nb;
			map[i + *(code) + *(code + 1)] = 'A' + nb;
			map[i + *(code) + *(code + 1) + *(code + 2)] = 'A' + nb;
			return (1);
		}
		i++;
	}
	return (0);
}

