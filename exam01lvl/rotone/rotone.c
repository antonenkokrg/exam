/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:55:34 by ilantone          #+#    #+#             */
/*   Updated: 2019/07/23 18:21:15 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char res;

	i = 0;
	if (argc ==2)
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Y') || (argv[1][i] >= 'a' && argv[1][i] <= 'y'))
			{
				res = argv[1][i] + 1;
				write(1, &res, 1);
			}
			else if (argv[1][i] == 'Z' || argv[1][i] == 'z')
			{
				res = argv[1][i] - 25;
				write(1, &res, 1);
			}
			else
				write(1, &argv[1][i], 1);
			++i;
		}
	write(1, "\n", 1);
	return (0);
}
