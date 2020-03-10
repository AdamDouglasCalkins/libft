/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:25:35 by acalkins          #+#    #+#             */
/*   Updated: 2020/03/10 14:27:17 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putarr(char **arr)
{
	int i;
	int	n;

	i = 0;
	n = sizeof arr / sizeof arr[0];
	while (i < n)
	{
		ft_putstr(arr[i]);
		ft_putchar('\t');
		i++;
	}
}
