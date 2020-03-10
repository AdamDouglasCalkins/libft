/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:48:31 by acalkins          #+#    #+#             */
/*   Updated: 2020/03/10 14:48:53 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;
	t_list	*tmp;

	list = *begin_list;
	while (list != NULL)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
	*begin_list = NULL;
}
