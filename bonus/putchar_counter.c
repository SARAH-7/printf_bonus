/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_counter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbakhit <sbakhit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:17:05 by sbakhit           #+#    #+#             */
/*   Updated: 2024/01/25 22:22:36 by sbakhit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putchar_counter(va_list args, int counter, t_spec *result)
{
	counter += ft_putchar(va_arg(args, int));
	if (result->flag_right_padding == 1)
		flag_right_padding(&counter, --result->width);
	return (counter);
}
