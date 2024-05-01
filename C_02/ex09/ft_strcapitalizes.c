/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalizes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:32:41 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/03/09 13:16:07 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] += 32;
			i++;
		}
		else if (str[i] < 48 || (str[i] > 57 && str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i] += 32;
				i++;
			}
			else
				i++;
		}
	}
	return (str);
}

int	main()
{
	char i;

	i = 0;
	printf("%s\n"
}
