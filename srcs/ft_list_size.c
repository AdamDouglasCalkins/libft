/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:37:32 by acalkins          #+#    #+#             */
/*   Updated: 2020/03/10 14:38:07 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		count;

    if (begin_list == NULL)
        return (0);
	count = 0;
	tmp = begin_list;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
