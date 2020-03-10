/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:40:33 by acalkins          #+#    #+#             */
/*   Updated: 2020/03/10 14:41:01 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_front(t_list **begin_list, void *data, int i)
{
	t_list	*tmp;

	if (*begin_list)
	{
		tmp = ft_create_elem(data, i);
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
	else
		*begin_list = ft_create_elem(data, i);
}
