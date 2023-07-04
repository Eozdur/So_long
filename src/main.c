/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:40:35 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/04 23:46:27 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc != 2)
		err_msg("Hata : 2 adet argüman girmelisiniz !");
	map_control(argv, &data);
	size_control(&data);
	mlx_create(&data);
}
