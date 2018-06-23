/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:03:49 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 12:31:45 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*te;
	char	*tem;
	size_t	i;

	te = (char *)s1;
	tem = (char *)s2;
	i = 0;
	while (i < n && te[i] == tem[i])
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)te[i] - (unsigned char)tem[i]);
}
