/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:23:25 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/01 09:54:22 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*src;

	i = 0;
	src = (char *)s;
	while (i < n)
	{
		src[i] = (char)c;
		i++;
	}
	return (src);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int i = 10;
// 	char buf1[i];
// 	char buf2[i];
// 	char a = 'A';
// 	buf1[i - 1] = '\0';
// 	buf2[i - 1] = '\0';
// 	memset(buf1, a, i - 1);
// 	ft_memset(buf2, a, i - 1);
// 	printf("memset=%s\n", buf1);
// 	printf("ft=%s\n", buf2);
// }
