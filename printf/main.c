/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:44:14 by magonzal          #+#    #+#             */
/*   Updated: 2023/04/19 19:52:03 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main()
{
	int i = 0;
	int b = 55464;
	char *s = "Holi Caracoli\n";
	i = ft_printf("%d",b);
	printf("\nReturn = %d", i);
	return 0;
}	