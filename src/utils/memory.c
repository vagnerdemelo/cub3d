/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 21:48:25 by vade-mel          #+#    #+#             */
/*   Updated: 2026/11/07 19:30:45 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** free_textures — destroy all loaded MLX images for the 4 wall textures.
*/
void	free_textures(t_game *game)
{
	int	i;

	i = 0;
	while (i < TEX_COUNT)
	{
		if (game->textures[i].img)
			mlx_destroy_image(game->mlx.mlx, game->textures[i].img);
		i++;
	}
}
