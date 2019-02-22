/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtudes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:39:43 by vtudes            #+#    #+#             */
/*   Updated: 2018/06/22 15:39:56 by vtudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec	vec_add(t_vec u, t_vec v)
{
	u.x += v.x;
	u.y += v.y;
	u.z += v.z;
	return (u);
}

t_vec	vec_substract(t_vec u, t_vec v)
{
	u.x -= v.x;
	u.y -= v.y;
	u.z -= v.z;
	return (u);
}

t_vec	vec_multiply(t_vec u, double t)
{
	u.x *= t;
	u.y *= t;
	u.z *= t;
	return (u);
}

double	vec_cos(t_vec u, t_vec v)
{
	double a;
	double b;
	double c;
	double cos;

	a = dot_product(u, v);
	b = dot_product(u, u);
	c = dot_product(v, v);
	cos = a / (b * c);
	return (cos);
}

t_vec	vec_cross_product(t_vec u, t_vec v)
{
	t_vec res;

	res.x = u.y * v.z - u.z * v.y;
	res.y = u.z * v.x - u.x * v.z;
	res.z = u.x * v.y - u.y * v.x;
	return (res);
}
