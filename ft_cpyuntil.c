/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpyuntil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 16:18:22 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 11:28:38 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cpyuntil(char **dst, char *src, char c)
{
	int		i;
	int		p;
	int		counter;

	i = -1;
	counter = 0;
	while (src[++i])
		if (src[i] == c)
			break ;
	p = i;
	if (!(*dst = ft_strnew(i)))
		return (0);
	while (src[counter] && counter < i)
	{
		if (!(*dst = ft_strjoinchr(*dst, src[counter])))
			return (0);
		counter++;
	}
	return (p);
}
