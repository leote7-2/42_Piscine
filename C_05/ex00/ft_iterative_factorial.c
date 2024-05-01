/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:17:07 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/03/12 12:46:42 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	i;

	i = 1;
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (i);
}
/*#include <stdio.h>

int	main()
{
	printf("%i\n", ft_iterative_factorial(5));
}*/
