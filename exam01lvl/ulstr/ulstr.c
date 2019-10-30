/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:04:07 by ilantone          #+#    #+#             */
/*   Updated: 2019/07/23 15:19:36 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char res;

	i = 0;
	if (argc == 2)
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				res = argv[1][i] + 32;
				write(1, &res, 1);
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{                
			   	res = argv[1][i] - 32;
			   	write(1, &res, 1);
		   	}
			else {
			write(1, &argv[1][i], 1);
			}
			i++;
		}
	write(1, "\n", 1);
}

