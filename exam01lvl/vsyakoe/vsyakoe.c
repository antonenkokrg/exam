/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vsyakoe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 10:48:13 by ilantone          #+#    #+#             */
/*   Updated: 2019/08/01 10:55:41 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	while (argv[1][i] != '\0')
		i++;
	while(i)
	{
		write(1, &argv[1][--i], 1);	
	}
}
