/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:38:55 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/03/11 13:34:11 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	if (to_find[b] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + b] == to_find[b] && str[i + b] != '\0')
			b++;
		if (to_find[b] == '\0')
			return (str + i);
		i++;
		b = 0;
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
	char	str[] = "os dentes caem quando o paulinho marca";
	char	find[] = "caem";

	printf("%s", ft_strstr(str, find));
}*/
