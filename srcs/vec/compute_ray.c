/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_ray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtudes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:40:39 by vtudes            #+#    #+#             */
/*   Updated: 2018/06/22 15:41:00 by vtudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

static t_vec	pitch(t_vec ray, t_camera cam)
{
	t_vec	axe;
	double	theta;

	axe = (t_vec) {ray.x, 0, 0};
	theta = (cam.angle.x / 180.0) * M_PI;
	axe.y = ray.y * cos(theta) - ray.z * sin(theta);
	axe.z = ray.y * sin(theta) + ray.z * cos(theta);
	return (axe);
}

static t_vec	yaw(t_vec ray, t_camera cam)
{
	t_vec	axe;
	double	theta;

	axe = (t_vec) {0, ray.y, 0};
	theta = (cam.angle.y / 180.0) * M_PI;
	axe.x = ray.x * cos(theta) - ray.z * sin(theta);
	axe.z = ray.x * sin(theta) + ray.z * cos(theta);
	return (axe);
}

t_vec			compute_ray(t_vec vp, t_camera cam)
{
	t_vec	ray;

	ray = vec_normalize(vec_substract(vp, cam.pos));
	ray = pitch(ray, cam);
	ray = yaw(ray, cam);
	return (ray);
}
