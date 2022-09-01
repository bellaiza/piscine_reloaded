/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:37:18 by coder             #+#    #+#             */
/*   Updated: 2022/08/26 20:46:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
			str++;
	}
}

int	main(int argc, char *argv[])
{
	int	c;

	c = 1;
	while (c < argc)
	{
		ft_putstr(argv[c]);
		ft_putchar('\n');
			c++;
	}
	return (0);
}
