/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:40:48 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/05 11:38:41 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlen(const char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
}