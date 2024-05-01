/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:13:55 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/03/04 19:51:59 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swp;

	i = 0;
	while (size >= 0)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swp;
			}
			i++;
		}
		size--;
		i = 0;
	}
}
