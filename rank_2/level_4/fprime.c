/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hawa <aal-hawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:36:03 by aal-hawa          #+#    #+#             */
/*   Updated: 2024/09/04 19:15:37 by aal-hawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_prime(int nbr)
{
	int i;
	
	i = 2;
	if (nbr == 2)
		return (1);
	while (i < nbr)
	{
		if (nbr % i == 0)
			return(0);
		i++;
	}
	return (1);
}

int main(int ac, char **arg)
{
	int nbr;
	int i;
	i = 2;
	int res = 1;
	int base_nbr;
	if (ac == 2)
	{
		nbr =atoi(arg[1]);
		base_nbr = nbr;
		if (nbr == 1)
		{
			printf ("1\n");
			return (0);
		}
		while (i <= nbr)
		{
			// if (is_prime(i) == 1)
			// {
				if (nbr % i == 0)
				{
					res *= i;
					if (res == base_nbr)
					{
						printf ("%d", i);
						break;
					}
					else
						printf ("%d*", i);
					nbr /= i;
					continue;
				}
			// }
			i++;
			// if (i == 100)
			// 	exit(1);
		}
		// if (res != nbr)
		// 	printf ("%d", nbr);
	}
	printf ("\n");
	return 0;
}