/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:26:53 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/03/17 20:16:06 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


char	*ft_strdup(char *src)
{
	int	i;
	char	*dest;

	i = 0;
	dest = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (dest)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
		return (NULL);
	dest[i] = '\0';
	return (dest);
}
