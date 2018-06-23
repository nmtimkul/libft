/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 14:43:50 by nmtimkul          #+#    #+#             */
/*   Updated: 2018/06/23 11:57:41 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*sorting;

	if (lst)
	{
		sorting = f(lst);
		sorting->next = ft_lstmap(lst->next, f);
		return (sorting);
	}
	return (NULL);
}
