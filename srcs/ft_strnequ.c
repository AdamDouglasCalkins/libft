/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 10:49:03 by acalkins          #+#    #+#             */
/*   Updated: 2018/04/23 10:49:44 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	num1;

	num1 = 0;
	while (s1[num1] != '\0' &&
			s2[num1] != '\0' && num1 < n - 1)
	{
		if (s1[num1] != s2[num1])
			return (0);
		num1++;
	}
	return (1);
}
