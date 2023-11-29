/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momazouz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:00:32 by momazouz          #+#    #+#             */
/*   Updated: 2023/11/26 11:53:19 by momazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	l;
	size_t	new_len;
	char	*str;

	l = ft_strlen(s);
	if (start < l)
	{
		new_len = ft_strlen(s + start);
		if (new_len < len)
			len = new_len;
	}
	else
		len = 0;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (start < l && j < len)
	{
		str[j++] = s[start++];
	}
	str[j] = '\0';
	return (str);
}
int main()
{
	char str[] = "Hello world";

	char *result = ft_substr(str, 20, 3);
	printf("%s", result);
}