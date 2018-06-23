/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 09:45:52 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 12:53:58 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	if (!(ptr = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ptr = (char *)ft_memset(ptr, '\0', (size + 1));
	return (ptr);
}
