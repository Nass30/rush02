/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readinput.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:04:17 by nben-yaa          #+#    #+#             */
/*   Updated: 2017/08/19 18:04:19 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"
#include <stdlib.h>

char	*readinput()
{
	char	*buffer;
	char	tab[4096];
	int		bytes_read;
	int		i;

	i = 0;
	buffer = malloc(sizeof(char) * 4096);

	read(0, buffer, 4096);
	return (buffer);
}
