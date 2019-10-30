/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:33:35 by ilantone          #+#    #+#             */
/*   Updated: 2019/07/23 14:37:38 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int get_index(char s)
{
	int i;
	char letter;

	i = 0;
	letter = 'a';
	if ((s  >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
	{
			while (s != letter && s != letter - 32)
			{
				letter++;
				i++;
			}
	}
	return (i + 1);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int count;

	i = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
		count = get_index(argv[1][i]);
		j = 0;
		while (j < count)
		{
			write(1, &argv[1][i], 1);
			j++;
		}
		i++;
		}
	}
	write(1, "\n", 1);

}


