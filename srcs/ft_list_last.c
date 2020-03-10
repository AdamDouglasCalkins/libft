/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:46:08 by acalkins          #+#    #+#             */
/*   Updated: 2020/03/10 14:47:05 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

	tmp = begin_list;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		return (tmp);
	}
	return (NULL);
}
