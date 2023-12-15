/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:32:40 by klefranc          #+#    #+#             */
/*   Updated: 2023/12/15 10:14:45 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*addr;

	if (nitems == 0 || size == 0)
	{
		nitems = 1;
		size = 1;
	}
	addr = malloc(nitems * size);
	if (!addr)
	{
		return (NULL);
	}
	ft_bzero(addr, nitems * size);
	return (addr);
}

/* void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
} */
