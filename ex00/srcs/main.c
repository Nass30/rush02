/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-yaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:09:20 by nben-yaa          #+#    #+#             */
/*   Updated: 2017/08/19 18:09:22 by nben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
	char	*buffer;
	char	tab[4096];
	int		bytes_read;
	int		i;

	i = 0;
	buffer = malloc(sizeof(char) * 4096);

	read(0, buffer, 4096);
	printf("%s\n", buffer);
	free(buffer);
	return 0;
}
