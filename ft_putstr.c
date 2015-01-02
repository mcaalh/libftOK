/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:13:32 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/05 11:45:19 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
}