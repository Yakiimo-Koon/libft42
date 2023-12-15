/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:07:08 by kevin             #+#    #+#             */
/*   Updated: 2023/12/15 11:52:01 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if ((big == NULL || little == NULL) && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j]
			&& little[j]
			&& big[i + j] == little[j]
			&& i + j < len)
			j++;
		if (!little[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>

int main(void)
{
    const char *str = "Hello, World!";
    const char *needle = "World";
    size_t len = 13; // Adjust the length as needed

    char *result = ft_strnstr(str, needle, len);

    if (result)
    {
        printf("Needle found at position: %ld\n", result - str);
    }
    else
    {
        printf("Needle not found in the str.\n");
    }

    return 0;
} */
