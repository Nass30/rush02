/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 13:23:37 by nben-yaa          #+#    #+#             */
/*   Updated: 2017/08/06 14:15:57 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	print_char(int countx, int county, int x, int y)
{
	if (countx == 1 && county == 1)
		ft_putchar('A');
	else if (y != 1 && x != 1 && countx == x && county == y)
		ft_putchar('A');
	else if ((countx == 1 && county == y) || (countx == x && county == 1))
		ft_putchar('C');
	else if ((countx == 1 || countx == x) && county != 1 && county != y)
		ft_putchar('B');
	else if ((county == 1 || county == y) && countx != 1 && countx != x)
		ft_putchar('B');
	else if (county > 1 && county < y && countx > 1 && countx < x)
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int county;
	int countx;

	if ( x < 1 || y < 1)
		return ;
	county = 0;
	while (++county <= y)
	{
		countx = 0;
		while (++countx <= x)
		{
			print_char(countx, county, x, y);
		}
		ft_putchar('\n');
	}
}

int		main(void)
{
	rush(5, 5);
	return (0);
}
