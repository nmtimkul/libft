/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpyuntil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:18:22 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/11/10 18:18:20 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cpyuntil(char **dst, char *src, char c)
{
	int		i;
	int		poz;
	int		counter;

	i = -1;
	counter = 0;
	while (src[++i])
		if (src[i] == c)
			break ;
	poz = i;
	if (!(*dst = ft_strnew(i)))
		return (0);
	while (src[counter] && counter < i)
	{
		if (!(*dst = ft_strjoinchr(*dst, src[counter])))
			return (0);
		counter++;
	}
	return (poz);
}
