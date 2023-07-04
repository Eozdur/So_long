/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:20:35 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/04 23:46:21 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	err_msg(char *msg)
{
	ft_printf("%s", msg);
	exit(0);
}

int	mouse_hook(int mousecode, t_data *data)
{
	(void)mousecode;
	(void)data;
	err_msg("Exit Success");
	return (0);
}

void	exit_door(t_data *data)
{
	if (data->coin_collected == data->coin_count)
		err_msg("FINISH");
	else
		ft_printf("Sorry, you can't exit. \n");
}
