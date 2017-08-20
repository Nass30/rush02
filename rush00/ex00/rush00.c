/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 14:11:40 by nben-yaa          #+#    #+#             */
/*   Updated: 2017/08/06 15:47:49 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_char(int countx, int county, int x, int y)
{
	if ((countx == x && county == y) || (countx == 1 && county == 1))
		ft_putchar('o');
	else if ((countx == 1 && county == y) || (countx == x && county == 1))
		ft_putchar('o');
	else if ((countx == 1 || countx == x) && county != 1 && county != y)
		ft_putchar('|');
	else if ((county == 1 || county == y) && countx != 1 && countx != x)
		ft_putchar('-');
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
