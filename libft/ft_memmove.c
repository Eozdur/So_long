/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:11:38 by eozdur            #+#    #+#             */
/*   Updated: 2023/04/14 14:11:40 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
		return (dest);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dest);
	}
	while (len--)
		*d++ = *s++;
	return (dest);
}
