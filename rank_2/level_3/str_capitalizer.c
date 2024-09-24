/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hawa <aal-hawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:44:52 by aal-hawa          #+#    #+#             */
/*   Updated: 2024/09/04 16:53:02 by aal-hawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void str_cap(char *str)
{
	int i;
	int is_first = 1;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if(str[i] >= 'a' && str[i] <= 'z' && is_first == 1)
			str[i] -= 32;
		if (str[i] == ' ' || str[i] == '\t')
			is_first = 1;
		else
			is_first = 0;
		write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **arv)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (arv[i])
		{
			str_cap(arv[i]);
			i++;
			if (arv[i])
			write (1, "\n", 1);
		}	
	}
	write (1, "\n", 1);
	return (0);
}

