/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hawa <aal-hawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:58:36 by aal-hawa          #+#    #+#             */
/*   Updated: 2024/09/04 17:18:08 by aal-hawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void put_nbr(int nbr)
{
	char c;
	
	if (nbr > 9)
	{
		put_nbr(nbr / 10);
		put_nbr(nbr % 10);
	}
	else
	{
		c = nbr + 48;
		write (1, &c, 1);
	}
}

void multy(int nbr)
{
	int i;
	int res;
	char c;
	i = 1;
	while (i < 10)
	{
		res = i * nbr;
		put_nbr(i);
		write (1, &c , 1);
		write (1, " x " , 3);
		put_nbr(nbr);
		write (1, &c , 1);
		write (1, " = " , 3);
		put_nbr(res);
		if (i != 9)
			write (1, "\n", 1);
		i++;
	}
}


int atoi(char *str)
{
	int nbr;
	
	nbr = 0;
	while (*str)
	{
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	return (nbr);
}

int main (int ac, char **arg)
{
	if (ac == 2)
	{
		multy(atoi(arg[1]));
	}
	write (1, "\n", 1);
	return (0);
}