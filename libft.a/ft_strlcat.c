/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momazouz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:32:02 by momazouz          #+#    #+#             */
/*   Updated: 2023/11/27 12:31:50 by momazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	size_t	j;

	i = 0;
	n = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (dest == NULL && dstsize == 0)
		return (j);
	while (dest[i] != '\0' && i < dstsize)
		i++;
	while (src[n] != '\0' && (i + n + 1) < dstsize)
	{
		dest[i + n] = src[n];
		n++;
	}
	if (i < dstsize)
		dest[i + n] = '\0';
	return (i + j);
}
