/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 22:17:08 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/16 22:27:14 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int	i;
	int j;

	i = 5;
	j = -5;
	ABS(i);
	ABS(j);
	printf("%i" , ABS(i));
	printf("%i" , ABS(j));
	return (0);
}