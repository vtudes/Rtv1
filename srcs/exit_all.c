/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlantonn <mlantonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 16:08:07 by mlantonn          #+#    #+#             */
/*   Updated: 2018/06/22 17:31:32 by pmiceli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void	exit_all(t_data *data)
{
	if (data->tex)
		free_tex(&data->tex);
	if (data->win)
		free_win(&data->win);
	SDL_Quit();
	if (data->nb_objects)
		free(data->objs);
	if (data->nb_lights)
		free(data->lights);
	exit(EXIT_SUCCESS);
}
