/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momazouz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:30:54 by momazouz          #+#    #+#             */
/*   Updated: 2023/11/25 23:22:09 by momazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trim;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1 != NULL && set != NULL && *s1 != '\0')
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		trim = (char *)malloc(sizeof(char) * (j - i + 1));
		if (trim)
			ft_strlcpy(trim, &s1[i], (j - i) + 1);
	}
	else
	{
		trim = (char *)malloc(1);
		if (trim)
			*trim = '\0';
	}
	return (trim);
}
