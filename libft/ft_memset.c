/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:11:43 by eozdur            #+#    #+#             */
/*   Updated: 2023/04/14 14:11:44 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	char			*buc;

	i = 0;
	buc = (char *)s;
	while (i < n)
	{
		buc[i] = c;
		i++;
	}
	s = buc;
	return (s);
}
