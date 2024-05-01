/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:22:11 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/03/19 15:55:36 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*d;
	int	p;
	
	i = 0 ;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	p = max - min;
	d = malloc(sizeof(int) * (p));
	if (d)
	{
		while (min < max)
		{
			d[i] = min;
			i++;
			min++;
		}
	}
	else
		return (-1);
	*range = d;
	return (i);
}
