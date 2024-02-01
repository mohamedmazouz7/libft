/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momazouz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:53:54 by momazouz          #+#    #+#             */
/*   Updated: 2023/11/17 14:58:23 by momazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}
/*int	main(void)
{
	char	up;
	char	low;

	up = 'A';
	low = ft_tolower(up);
	printf("upercase =>  %c", up);
	printf("\nlowercase => %c", low);
}*/
