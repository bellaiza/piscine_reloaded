/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:26:18 by coder             #+#    #+#             */
/*   Updated: 2022/09/01 18:33:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	c;
	int		x;

	x = 0;
	c = 0;
	while (str[x] != c)
	{
		x++;
	}
	return (x);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*string;
	int		i;

	size = ft_strlen(src);
	string = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (src[i] != '\0')
	{
		string[i] = src[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
