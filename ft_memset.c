/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momazouz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:03:29 by momazouz          #+#    #+#             */
/*   Updated: 2023/11/27 17:12:36 by momazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*p;

	p = (unsigned char *)dest;
	while (count > 0)
	{
		p[count - 1] = c;
		count--;
	}
	return (dest);
}
