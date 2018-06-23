/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 13:00:41 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 12:52:27 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && n)
	{
		n--;
		dest[i] = src[i];
		i++;
	}
	while (n)
	{
		dest[i] = '\0';
		n--;
		i++;
	}
	return (dest);
}
