/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:53:00 by klefranc          #+#    #+#             */
/*   Updated: 2023/12/21 11:55:29 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*element;

	if (size != 0 && count > (size_t) - 1 / size)
		return (NULL);
	element = malloc(count * size);
	if (!element)
		return (NULL);
	ft_bzero(element, (count * size));
	return (element);
}

/*  int	main(void)
 {
 	#include <stdio.h>
 	#include <string.h>

 	printf("Original: %p\n", calloc(5, 5));
 	printf("Result: %p\n", ft_calloc(5, 5));
 	return (0);
 } */