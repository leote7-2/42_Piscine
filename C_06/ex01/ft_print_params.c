/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 05:41:08 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/03/13 06:11:56 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	a;
	int	b;

	b = 1;
	while (b < ac)
	{
		a = 0;
		while (av[b][a] != '\0')
		{
			write(1, &av[b][a], 1);
			a++;
		}
		write(1, "\n", 1);
		b++;
	}
	return (0);
}
