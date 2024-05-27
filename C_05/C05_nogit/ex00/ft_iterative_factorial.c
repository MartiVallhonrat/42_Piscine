/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:10:30 by mvallhon          #+#    #+#             */
/*   Updated: 2023/10/31 11:45:08 by mvallhon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;
	int	i;

	temp = 1;
	i = 1;
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		temp = temp * i;
		if (i == nb)
			return (temp);
		i++;
	}
	return (0);
}
