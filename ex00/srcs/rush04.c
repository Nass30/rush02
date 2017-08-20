/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 13:10:52 by nben-yaa          #+#    #+#             */
/*   Updated: 2017/08/06 13:27:04 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_head.h"
#include <stdlib.h>
#include <stdio.h>

char	*print_char(int countx, int county, int x, int y)
{
	char	*tab;

	tab = malloc(sizeof(char) * y);
	tab[0] = '\0';
	if (countx == 1 && county == 1)
		ft_strcat(tab, "A");
	else if (y != 1 && x != 1 && countx == x && county == y)
		ft_strcat(tab, "A");
	else if ((countx == 1 && county == y) || (countx == x && county == 1))
		ft_strcat(tab, "C");
	else if ((countx == 1 || countx == x) && county != 1 && county != y)
		ft_strcat(tab, "B");
	else if ((county == 1 || county == y) && countx != 1 && countx != x)
		ft_strcat(tab, "B");
	else if (county > 1 && county < y && countx > 1 && countx < x)
		ft_strcat(tab, " ");
	return tab;
}

void	rush04(int x, int y)
{
	int 	county;
	int		countx;
	char	*tab;
	char	*rush;

	rush = malloc(sizeof(char) * x * y + 1);
	county = 0;
	while (++county <= y)
	{
		countx = 0;
		while (++countx <= x)
		{
			tab = print_char(countx, county, x, y);
			ft_strcat(rush, tab);
			free(tab);
		}
		ft_strcat(rush, "\n");
	}
	printf("%s", rush);
	free(rush);
}
int main(void) {
	rush04(4,4);
	return 0;
}
