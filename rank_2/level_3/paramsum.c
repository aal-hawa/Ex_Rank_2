/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hawa <aal-hawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:52:10 by aal-hawa          #+#    #+#             */
/*   Updated: 2024/09/04 15:10:28 by aal-hawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

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

int	main(int ac, char **arv)
{
	(void)arv;
	ac -= 1;
	put_nbr(ac);
	write (1,"\n", 1);
	return (0);
}