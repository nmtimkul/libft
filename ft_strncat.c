/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 13:25:54 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 12:51:38 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *str, size_t n)
{
	size_t dest_len;
	size_t i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (str[i] != '\0' && i < n)
	{
		dest[dest_len + i] = str[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
