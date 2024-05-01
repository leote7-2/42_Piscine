/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:50:03 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/03/13 13:48:08 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		i *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	printf("%i\n", ft_recursive_factorial(3));
}*/
