/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:17:19 by matemart          #+#    #+#             */
/*   Updated: 2024/02/07 00:17:21 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dest_len;

	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = dest_len;
	if (size == 0)
		return (src_len);
	if (size < dest_len)
		return (src_len + size);
	else
	{
		while (src[j] && (dest_len + j) < size)
			dest[i++] = src[j++];
		if ((dest_len + j) == size && dest_len < size)
			dest[--i] = '\0';
		else
			dest[i] = '\0';
		return (src_len + dest_len);
	}
}
