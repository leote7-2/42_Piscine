/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:27:40 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/03/11 13:47:50 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = ft_strlen(dest);
	if (size != 0)
	{
		while (src[a] != '\0' && a < size)
		{
			dest[b] = src[a];
			a++;
			b++;
		}
		dest[a + b] = '\0';
	}
	return (b);
}

/*int	main()
{
	char	dest[100] = "Hello";
	char	src[] = "Sporting";

	printf("%i\n", ft_strlcat(dest, src, 4));
	printf("%s\n", dest);
	return 0;
}*/
