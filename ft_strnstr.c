/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevin <kevin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:07:08 by kevin             #+#    #+#             */
/*   Updated: 2023/11/19 14:51:11 by kevin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (!str || !needle)
		return (NULL);
	if (!needle || !needle[0])
		return ((char*)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && needle[j] && i + j < len && str[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char*)(str + i));
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int main(void)
{
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    size_t len = 13; // Adjust the length as needed

    char *result = ft_strnstr(haystack, needle, len);

    if (result)
    {
        printf("Needle found at position: %ld\n", result - haystack);
    }
    else
    {
        printf("Needle not found in the haystack.\n");
    }

    return 0;
}
