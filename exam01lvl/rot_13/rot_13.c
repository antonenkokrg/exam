/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:06:30 by ilantone          #+#    #+#             */
/*   Updated: 2019/07/23 17:16:14 by ilantone         ###   ########.fr       */
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
		   if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') ||( argv[1][i] >= 'A' && argv[1][i] <= 'M'))
		   {
			  res = argv[1][i] + 13;
			  write(1, &res, 1);
		   }
		   else if((argv[1][i] >= 'n' && argv[1][i] <= 'z') ||( argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
		   {
			   res = argv[1][i] - 13;
			   write(1, &res, 1);
		   }
		   else 
			   write(1, &argv[1][i], 1);
		   i++;
	   }
	write(1, "\n", 1);
}
