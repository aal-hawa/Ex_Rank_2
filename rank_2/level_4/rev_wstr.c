/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hawa <aal-hawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 21:04:40 by aal-hawa          #+#    #+#             */
/*   Updated: 2024/09/04 21:29:16 by aal-hawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac , char **arg)
{
	int i;
	int j;
	int n;
	int is_get = 1;
	char *str = arg[1];
	i = 0;
	if (ac == 2)
	{
		while (str[i])
			i++;
		i--;
		j = i;
		while(i > 0)
		{
			while (i > 0 && (str[i] == ' ' || str[i] == '\t'))
			{
				i--;
				j--;
			}
			while (i > 0 && str[i] != ' ' && str[i] != '\t')
			{
				i--;
			}
			if (i > 0 && (str[i] == ' ' || str[i] == '\t'))
			{
				n = i;
				i++;
				while (i <= j)
					write(1, &str[i++], 1);
				i = n;
				j = n;
				write (1, " ", 1);
			}
		}
		if (i == 0 && str[i] != ' ' && str[i] != '\t')
		{
			while (str[i] && str[i] != ' ' && str[i] != '\t')
				write(1, &str[i++], 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}