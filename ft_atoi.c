/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:09:58 by kyamada           #+#    #+#             */
/*   Updated: 2024/11/30 13:40:48 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 1;
	k = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		i++;
		j = -1;
		if (nptr[i] == '+')
			return (0);
	}
	if (nptr[i] == '+')
		i++;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		k = k * 10 + (nptr[i] - '0');
		i++;
	}
	return (k * j);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main ()
// {
// 	char n[] = "2147483648";
// 	printf("atoi=%d", atoi(n));
// 	printf("ft_=%d", ft_atoi(n));
// }
