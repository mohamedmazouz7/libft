/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momazouz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:21:59 by momazouz          #+#    #+#             */
/*   Updated: 2023/11/26 13:41:06 by momazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src)
		return (dest);
	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*int main()
{
	int src[] = {1,2,3,4,8};
	int dest[12] = {2,3,5,5,5};

	ft_memcpy(dest, src, 4);
	for (int i = 0; i < ; i++)
	{
		printf("%c ", dest[i]);
	}
	//printf("%s", ft_memcpy(dest, src, 3));
}*/
