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

void	rush(int x, int y);

int		main(int argc, char **argv)
{
	rush(ft_atoi(argv[1][0]), ft_atoi(argv[1][1]));
	return (0);
}
