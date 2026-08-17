/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaijot <sbaijot@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 14:05:07 by sbaijot           #+#    #+#             */
/*   Updated: 2026/08/15 15:53:27 by panaulet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2) // Verification du nombre d'argument
	{
		write(1, "Error", 5);
		return (0);
	}
	ft_input(argv[1]); // Parsing
	return (0);
}
