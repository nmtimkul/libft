/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 09:09:50 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 12:58:06 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (!(temp = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[start] && i < len)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	temp[i] = '\0';
	return (temp);
}
