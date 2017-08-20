/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 13:10:52 by nben-yaa          #+#    #+#             */
/*   Updated: 2017/08/06 14:59:22 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_char(int countx, int county, int x, int y)
{
	if ((countx == 1 && county == 1) || (countx == x && county == 1))
		ft_putchar('A');
	else if (y != 1 && x != 1 && countx == x && county == y)
		ft_putchar('C');
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
