/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 16:30:40 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 12:49:01 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinchr(char const *s, char c)
{
	char	*new_str;
	size_t	i;
	size_t	s_len;

	if (!s || !c)
		return (NULL);
	s_len = ft_strlen(s);
	new_str = ft_strnew(s_len + 1);
	if (!new_str)
		return (NULL);
	i = -1;
	while (++i < s_len)
		*(new_str + i) = *(s + i);
	*(new_str + i) = c;
	return (new_str);
}
