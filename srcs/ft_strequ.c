/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 10:37:36 by acalkins          #+#    #+#             */
/*   Updated: 2018/04/23 10:38:18 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int num1;

	num1 = 0;
	while (s1[num1] == s2[num1] && s1[num1] != '\0' && s2[num1] != '\0')
	{
		num1++;
	}
	if ((s1[num1] == '\0') && (s2[num1] == '\0'))
		return (1);
	else
		return (0);
}
