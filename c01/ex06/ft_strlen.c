/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:21:55 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/03/04 11:06:44 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*a = "Buenas tardes";

	printf("Length of string = %d \n", ft_strlen(a));
} */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}
