/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:28:44 by joamiran          #+#    #+#             */
/*   Updated: 2024/03/03 12:25:22 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	rush(int x, int y); //declaring rush func

int	main(int argc, char *argv[])
	{
/* Check if ONLY TWO arguments are provided*/
	if (argc != 3)
	{
		write(1, "Please use only two values x: row, y: column \n", 47);
/*error msg if there are more than 2 parameters and exit with error*/
		return (1);
	}
/* Convert command-line arguments to integers*/
	int	x;
	int	y;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
/* Check if parameters are positive*/
	if (x <= 0 || y <= 0)
	{
		write(1, "Error: Values for X and Y MUST BE NUMBERS AND > 0 \n", 52);
		return (1);
	}
/* Calling the rush function with the correct  parameters*/
	rush(x, y);
	return (0);
}
