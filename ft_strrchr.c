/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 13:13:09 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 12:54:43 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *haystack, int c)
{
	int len;
	int i;

	len = ft_strlen(haystack) + 1;
	i = len - 1;
	while (i >= 0)
	{
		if (haystack[i] == c)
			return ((char *)(haystack + i));
		i--;
	}
	return (NULL);
}
