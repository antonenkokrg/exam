/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:25:06 by ilantone          #+#    #+#             */
/*   Updated: 2019/07/23 19:42:19 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main( int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == ' ' ||  argv[1][i] == '\t')
				break;
			else 
				write(1, &argv[1][i], 1);
			--i;
		}
	}
	write(1, "\n", 1);
	return (0);
}
