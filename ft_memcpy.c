/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 10:51:17 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 12:34:30 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp;
	char	*temp2;

	i = 0;
	if (n == 0 || dest == src)
		return (dest);
	temp = (char *)dest;
	temp2 = (char *)src;
	while (i < n)
	{
		temp[i] = temp2[i];
		i++;
	}
	dest = (void *)temp;
	return (dest);
}
