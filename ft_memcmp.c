/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:43:35 by klefranc          #+#    #+#             */
/*   Updated: 2023/12/15 10:11:44 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/* int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*p1;
	unsigned char	*p2;

	*p1 = ptr1;
	*p2 = ptr2;
	while (num > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		num--;
	}
	return (*p1 - *p2);
} */
