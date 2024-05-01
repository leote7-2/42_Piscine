/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:18:46 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/03/03 13:23:55 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	c = 0;
	l = 0;
	while (++l <= y)
	{
		while (++c <= x)
		{
			if ((l == 1 && c == 1) || (l == y && c == x))
				ft_putchar(111);
			else if ((l == y && c == 1) || (l == 1 && c == x))
				ft_putchar(111);
			else if ((l == 1 && c > 1 && c < x) || (l == y && c > 1 && c < x))
				ft_putchar(45);
			else if ((c == 1 && l > 1 && l < y) || (c == x && l > 1 && l < y))
				ft_putchar(124);
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
		c = 0;
	}
}
