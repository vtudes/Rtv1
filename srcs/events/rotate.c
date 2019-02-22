/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtudes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:42:18 by vtudes            #+#    #+#             */
/*   Updated: 2018/06/22 15:42:23 by vtudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "events.h"
#include "vec.h"

void	rotate_i(t_data *data)
{
	data->cams[data->i].angle.x -= ANGLE;
	if (data->cams[data->i].angle.x <= -360.0)
		data->cams[data->i].angle.x += 360.0;
}

void	rotate_k(t_data *data)
{
	data->cams[data->i].angle.x += ANGLE;
	if (data->cams[data->i].angle.x >= 360.0)
		data->cams[data->i].angle.x -= 360.0;
}

void	rotate_j(t_data *data)
{
	data->cams[data->i].angle.y += ANGLE;
	if (data->cams[data->i].angle.y >= 360.0)
		data->cams[data->i].angle.y -= 360.0;
}

void	rotate_l(t_data *data)
{
	data->cams[data->i].angle.y -= ANGLE;
	if (data->cams[data->i].angle.y <= -360.0)
		data->cams[data->i].angle.y += 360.0;
}
