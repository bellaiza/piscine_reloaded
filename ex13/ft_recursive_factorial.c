/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:00:43 by coder             #+#    #+#             */
/*   Updated: 2022/08/26 19:03:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * ft_recursive_factorial(n - 1));
}
