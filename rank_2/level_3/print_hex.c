/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hawa <aal-hawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:38:37 by aal-hawa          #+#    #+#             */
/*   Updated: 2024/09/04 15:50:28 by aal-hawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int put_hex_nbr(int nbr)
{
	if(nbr > 15)
	{
		put_hex_nbr(nbr / 16);
		put_hex_nbr(nbr % 16);
	}
	else
	{
		char c  = "0123456789abcdef"[nbr];
		write(1, &c, 1);
	}
}

int put_nbr(char *str)
{
	int nbr;

	while (*str)
	{
		nbr *=10;
		nbr += *str - '0';
		str++;
	}
	return (nbr);
}

int main(int ac, char **arv)
{
	if (ac == 2)
		put_hex_nbr(put_nbr(arv[1]));
	write (1, "\n", 1);
	return (0);
}