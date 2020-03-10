/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:44:23 by acalkins          #+#    #+#             */
/*   Updated: 2020/03/10 14:44:50 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		index;
	t_list	*new_list;
	t_list	*new_element;

	index = 0;
	new_list = NULL;
	while (index < ac)
	{
		new_element = ft_create_elem(av[index], 0);
		new_element->next = new_list;
		new_list = new_element;
		index++;
	}
	return (new_list);
}
