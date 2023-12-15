/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:46:43 by kevin             #+#    #+#             */
/*   Updated: 2023/12/15 12:05:22 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s + start);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = 0;
	return (str);
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