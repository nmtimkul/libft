/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 14:42:26 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 12:44:55 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *haystack, int c)
{
	int		i;
	char	*temp;
	int		len;

	i = 0;
	len = ft_strlen(haystack) + 1;
	while (len)
	{
		if (haystack[i] == (char)c)
		{
			temp = (char *)(haystack + i);
			return ((char *)temp);
		}
		len--;
		i++;
	}
	return (NULL);
}
