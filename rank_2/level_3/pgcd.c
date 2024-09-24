/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hawa <aal-hawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:15:47 by aal-hawa          #+#    #+#             */
/*   Updated: 2024/09/04 15:35:02 by aal-hawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
#include <stdio.h>

int main (int ac, char **arv)
{
	int a;
	int b;
	int i;
	int small;
	int res= 1;
	i = 1;
	if(ac == 3)
	{
		a = atoi(arv[1]);
		b = atoi(arv[2]);
		if (a <= 0 || b <= 0)
			return (printf("\n"));
		if (a <= b)
			small = a;
		else
			small = b;
		while (i <= small)
		{
			if (a % i == 0 && b % i == 0)
				res = i;
			i++;
		}
		printf("%d", res);
	}
	printf("\n");
}