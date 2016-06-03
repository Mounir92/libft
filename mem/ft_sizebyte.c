/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizebyte.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <mmouhssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/18 21:49:14 by mmouhssi          #+#    #+#             */
/*   Updated: 2016/06/03 04:57:16 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sizebyte(void *nbr)
{
	int size;

	size = 0;
	while (*(long long *)nbr != 0)
	{
		*(long long *)nbr = *(long long *)nbr >> 1;
		size++;
	}
	return (size);
}
