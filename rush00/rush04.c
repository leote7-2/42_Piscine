/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:55:08 by joamiran          #+#    #+#             */
/*   Updated: 2024/03/03 11:43:38 by joamiran         ###   ########.fr       */
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
				ft_putchar('A');
			else if ((l == y && c == 1) || (l == 1 && c == x))
				ft_putchar('C');
			else if ((l == 1 && c > 1 && c < x) || (l == y && c > 1 && c < x))
				ft_putchar('B');
			else if ((c == 1 && l > 1 && l < y) || (c == x && l > 1 && l < y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
		c = 0;
	}
}
