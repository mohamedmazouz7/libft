/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momazouz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:30:22 by momazouz          #+#    #+#             */
/*   Updated: 2023/11/24 22:20:36 by momazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	long long int	r;

	i = 0;
	n = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	return (r * n);
}
#include <string.h>
int main()
{
	printf("%d\n", ft_atoi("   5193451111111111111116fgdhdh"));
	printf("%d\n", atoi("   5193451111111111111116dhdfhd"));
}