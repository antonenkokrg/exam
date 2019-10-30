/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:38:32 by ilantone          #+#    #+#             */
/*   Updated: 2019/07/23 12:47:35 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while( str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(void)
{
	char s1[] = "herzhaemfdnbl  st";

	printf("%d\n", ft_strlen(s1));
}
