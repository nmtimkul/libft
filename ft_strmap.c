/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 14:51:20 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 12:51:01 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	char	*temp;
	int		i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	if (!(temp = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		temp[i] = f(s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
