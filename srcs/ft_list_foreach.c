/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:53:20 by acalkins          #+#    #+#             */
/*   Updated: 2020/03/10 14:53:56 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*temp;

	temp = begin_list;
	while (temp != NULL)
	{
		(*f)(temp->data);
		temp = temp->next;
	}
}
