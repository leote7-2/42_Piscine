/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:57:35 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/03/12 18:30:49 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 2)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	printf("%i\n", ft_recursive_power(2, 4));
}*/
