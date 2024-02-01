/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momazouz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:09:41 by momazouz          #+#    #+#             */
/*   Updated: 2023/11/23 18:36:05 by momazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	i = 0;
	if (dest == src)
		return (dest);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
/*int main()
{
	char source[] = "Hello, world";
	char destination[] = "hello, world";

	// Using memmove to copy the content of source to destination
	ft_memmove(destination, source, 3);

	// Printing the result
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	return (0);
}*/
/*int main()
{
	int src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int dest[10];
	unsigned long i;

	ft_memmove(dest, src, sizeof(int) * 9);

	i = 0;
	while (i < 9)
	{
		printf("\n%d\n ", dest[i]);
		i++;
	}
}*/
