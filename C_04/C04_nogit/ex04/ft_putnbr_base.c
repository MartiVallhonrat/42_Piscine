/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:22:12 by mvallhon          #+#    #+#             */
/*   Updated: 2023/10/30 15:01:01 by mvallhon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	return_base(char *base)
{
	int	right_base;
	int	i;
	int	j;

	right_base = 1;
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+'
			|| !(base[i] >= 32 && base[i] <= 126))
			right_base = 0;
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				right_base = 0;
			j++;
		}
		i++;
	}
	return (right_base);
}

void	get_char_numbers(char *base, int nbr, int base_size)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		if ((nbr / base_size * (-1)) != 0)
			get_char_numbers(base, ((nbr / base_size) * (-1)), base_size);
		get_char_numbers(base, -(nbr % (base_size * (-1))), base_size);
	}
	else if (nbr >= base_size)
	{
		get_char_numbers(base, (nbr / base_size), base_size);
		get_char_numbers(base, (nbr % base_size), base_size);
	}
	else
	{
		c = base[nbr];
		write(1, &c, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	base_size = 0;
	while (base[base_size] != '\0')
		base_size++;
	if (return_base(base) == 1 && base_size > 1)
		get_char_numbers(base, nbr, base_size);
}
