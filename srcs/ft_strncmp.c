/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 10:45:01 by acalkins          #+#    #+#             */
/*   Updated: 2018/04/24 20:46:54 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int num1;

	num1 = 0;
	while (s1[num1] == s2[num1] && s1[num1] != '\0' &&
			s2[num1] != '\0' && num1 < n - 1)
	{
		num1++;
	}
	return ((unsigned char)s1[num1] - (unsigned char)s2[num1]);
}
