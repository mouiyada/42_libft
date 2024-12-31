/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:23:25 by kyamada           #+#    #+#             */
/*   Updated: 2024/11/30 13:49:24 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int i = 5;
// 	char buf1[] = "abcdefghij";
// 	char buf2[] = "abcdefghij";
// 	char buf3[] = "11111";
// 	memcpy(buf1, buf3, i);
// 	ft_memcpy(buf2, buf3, i);
// 	printf("memcpy=%s\n", buf1);
// 	printf("ft=%s\n", buf2);
// }
