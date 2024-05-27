/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:02:11 by mvallhon          #+#    #+#             */
/*   Updated: 2023/10/30 17:36:04 by mvallhon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int return_base(char *base)
{
	int right_base;
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| !(base[i] >= 32 && base[i] <= 126))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	get_char_to_int(char c, char *base)
{
	int i;

	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		else
			return (-1);
	}
}

int ft_atoi(char *str, char *base)
{
	int i;
	int minus;
	int	res;

	i = 0;
	minus = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= ' ' || str[i] == '+')
		{
			i++;
			continue ;
		}
		else if (str[i] == '-')
			minus++;
		else
		{
			if (get_char_int(str[i], base) != (-1))
				res = (res * 10) + get_char_int(str[i], base);
			else
				return (-1);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int base_size;

	base_size = return_base(base);
	if (base_size > 1)
		return (ft_atoi(str));
}
