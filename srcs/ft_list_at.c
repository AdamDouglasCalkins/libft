/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:50:41 by acalkins          #+#    #+#             */
/*   Updated: 2020/03/10 14:51:25 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*tmp;
	unsigned int	index;

	index = 1;
	tmp = begin_list;
	while (index < nbr + 1)
	{
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
		index++;
	}
	return (tmp);
}
