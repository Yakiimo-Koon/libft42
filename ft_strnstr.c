/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:07:08 by kevin             #+#    #+#             */
/*   Updated: 2023/12/06 12:43:26 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0' || len == 0)
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == needle[j] && needle[j] \
					&& str[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)str + i);
		}
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
