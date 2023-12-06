/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:05:55 by kevin             #+#    #+#             */
/*   Updated: 2023/12/06 12:09:20 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	size_t			i;

	ptr = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (*(ptr + i) == *(ptr2 + i) && (i < n - 1) && *(ptr + i))
		i++;
	return (*(ptr + i) - *(ptr2 + i));
}

