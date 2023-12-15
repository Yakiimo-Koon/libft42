/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:46:43 by kevin             #+#    #+#             */
/*   Updated: 2023/12/15 10:07:04 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = '\0';
	return (sub);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char *originalString = "Hello, World!";

    unsigned int start = 7;
    size_t len = 5;

    char *substring = ft_substr(originalString, start, len);

    if (substring != NULL) {
        printf("Original String: %s\n", originalString);
        printf("Substring: %s\n", substring);

        free(substring);
    } else {
        printf("Allocation failed.\n");
    }

    return 0;
} */