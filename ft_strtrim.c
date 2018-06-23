/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 09:48:24 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 13:12:25 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	b;
	size_t	e;
	size_t	len;
	char	*str;

	if (!s)
		return (NULL);
	b = 0;
	e = ft_strlen(s) - 1;
	while (b < ft_strlen(s) && ft_isspace(s[b]))
		b++;
	while (e > b && ft_isspace(s[e]))
		e--;
	len = e - b + 1;
	str = ft_strsub(s, b, len);
	return (str);
}
