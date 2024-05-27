/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:36:31 by mvallhon          #+#    #+#             */
/*   Updated: 2023/11/02 13:04:20 by mvallhon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	if (min - max == 0)
		return (NULL);
	res = (int *) malloc((max - min) * sizeof(int));
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
