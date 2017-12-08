/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:15:12 by ncella            #+#    #+#             */
/*   Updated: 2017/11/07 10:30:04 by ncella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tmp;

	i = 0;
	if (min >= max)
		return (0);
	else
	{
		tmp = malloc(sizeof(int) * (max - min + 1));
		if (tmp == NULL)
			return (NULL);
		while (min < max)
		{
			tmp[i] = min;
			i++;
			min++;
		}
		tmp[i] = '\0';
		return (tmp);
	}
}
