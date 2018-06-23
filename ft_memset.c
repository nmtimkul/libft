/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:49:16 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 12:35:53 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	while (i < n)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	s = tmp;
	return ((void *)s);
}
