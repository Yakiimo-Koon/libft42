/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevin <kevin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:50:17 by kevin             #+#    #+#             */
/*   Updated: 2023/11/20 12:12:11 by kevin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_malloc_size(int size, char **strs, char *sep)
{
	int	i;
	int	res;

	if (size == 0)
		return (1);
	i = 0;
	res = 0;
	while (i < size)
		res += ft_strlen(strs[i++]);
	res += ft_strlen(sep) * (size - 1);
	return (res + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	size_t	offset;

	res = malloc(get_malloc_size(size, strs, sep) * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = 0;
	if (size == 0)
		return (res);
	i = 0;
	offset = 0;
	while (i < size)
	{
		ft_strlcat(res + offset, strs[i], get_malloc_size(size, strs, sep) - offset);
		offset += ft_strlen(strs[i]);
		if (i != size - 1)
		{
			ft_strlcat(res + offset, sep, get_malloc_size(size, strs, sep) - offset);
			offset += ft_strlen(sep);
		}
		i++;
	}
	return (res);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc, argv, "---"));
	return 0;
}
