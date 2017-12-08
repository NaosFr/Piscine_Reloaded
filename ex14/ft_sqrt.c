/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:48:15 by ncella            #+#    #+#             */
/*   Updated: 2017/11/06 17:01:44 by ncella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int nbr;
	int count;

	nbr = nb;
	count = 0;
	while (nbr > 0)
	{
		nbr = nbr - 2;
		if (nbr * nbr == nb)
			count = nbr;
	}
	if (count == nb || nb < 0)
		return (0);
	else
		return (count);
}
