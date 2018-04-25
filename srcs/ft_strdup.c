/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 10:36:17 by acalkins          #+#    #+#             */
/*   Updated: 2018/04/24 20:29:01 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char const *src)
{
	int		i;
	char	*str;

	if (src)
	{
		str = ft_strnew(ft_strlen(src) + 1);
		if (str)
		{
			i = 0;
			while (src[i])
			{
				str[i] = src[i];
				i++;
			}
			return (str);
		}
	}
	return (NULL);
}
