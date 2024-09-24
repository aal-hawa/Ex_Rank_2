/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hawa <aal-hawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:20:56 by aal-hawa          #+#    #+#             */
/*   Updated: 2024/09/24 16:41:24 by aal-hawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int len(long nbr)
{
	int i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr/= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char *str;
	long nbr_l = nbr;
	int len_n = len(nbr_l);
	int is_sign = 1;
	str = malloc(sizeof(char) * len_n + 1);
	if (!str)
		return (NULL);
	str[len_n] = '\0';
	len_n--;
	if (nbr_l < 0)
	{
		nbr_l = -nbr_l;
		is_sign = -1;
	}
	while (len_n >= 0)
	{
		if (is_sign == -1 && len_n == 0)
		{
			str[0] = '-';
			break;
		}
		str[len_n] = nbr_l % 10 + '0';
		nbr_l /= 10;
		len_n--;
	}
	return (str);
}

int main ()
{
	char *str = ft_itoa(-2147483648);
	printf("%s\n", str);
	free (str);
}