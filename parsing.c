/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panaulet <panaulet@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 15:08:31 by panaulet          #+#    #+#             */
/*   Updated: 2026/08/15 17:22:51 by panaulet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_input_spaces(char *str);
void	ft_input_digits(char *str);
void	ft_get_pos(char *str);
void    ft_check_str(char *str);
char	*ft_extract_digits(char *str);

// Verifier le nombre de caracteres
void	ft_input(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
		i++;
	if (i != 31)
	{
		write(1, "Error", 5);
		return ;
	}
	ft_input_spaces(str);
}

// Verifier le nombre d'espaces
void	ft_input_spaces(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			j++;
		i++;
	}
	if (j != 15)
	{
		write(1, "Error", 5);
		return ;
	}
	ft_input_digits(str);
}

// Verifier les Digits et leurs Nombres [1,2,3,4]
void	ft_input_digits(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
			j++;
		i++;
	}
	if (j != 16)
	{
		write(1, "Error", 5);
		return ;
	}
	ft_get_pos(str);
}

// Verifier la position des Digits et des Espaces
void	ft_get_pos(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4' && (str[i + 1] == ' '))
			i = i + 2;
		else
		{
			write(1, "Error", 5);
			return ;
		}
	}
	ft_extract_digits(str);
}

// Extraire les Digits de la chaine (enlever les espaces)
void	ft_extract_digits(char *str)
{
	char	*digits;
	int		i;
	int		j;

	digits = malloc(sizeof(char) * 16);
	if (!digits)
		return (NULL);
	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		digits[j] = str[i];
		j++;
		i = i + 2;
	}
	j = j - 1;
	digits[j] = '\0';
	ft_check_str(digits);
}
