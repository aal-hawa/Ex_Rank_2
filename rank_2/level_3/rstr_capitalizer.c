/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hawa <aal-hawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:53:01 by aal-hawa          #+#    #+#             */
/*   Updated: 2024/09/04 16:38:00 by aal-hawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || !str[i + 1]))
			str[i] -= ('a' - 'A');
		else if (str[i] >= 'A' && str[i] <= 'Z' && str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1])
			str[i] += ('a' - 'A');
		write (1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **arv)
{
	int i;
	
	i = 1;
	if (ac > 1)
	{
		while(arv[i])
		{
			rstr(arv[i]);
			i++;
			if (arv[i])
				write (1, "\n", 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}