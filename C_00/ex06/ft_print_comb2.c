/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:03:02 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/03/07 13:55:01 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_intchar(int a)
{
	char	h;
	char	i;

	if (a <= 9)
	{
		ft_putchar('0');
		ft_putchar(a + '0');
	}
	else
	{
		h = a / 10 + '0';
		i = a % 10 + '0';
		ft_putchar(h);
		ft_putchar(i);
	}
}

void	ft_result(int x, int y)
{
	ft_intchar(x);
	ft_putchar(' ');
	ft_intchar(y);
	if (x != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_result(a, b);
			b++;
		}
		a++;
	}
}

/*int	main()
{
	ft_print_comb2();
	return(0);
}*/
