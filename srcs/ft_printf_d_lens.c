/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraekev <abraekev@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:58:41 by abraekev          #+#    #+#             */
/*   Updated: 2024/03/17 17:22:21 by abraekev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	set_i_len(t_data *d)
{
	if (!d->insert)
		d->i_len = 0;
	else
		d->i_len = ft_strlen(d->insert);
	if (!d->i_len && d->cspec == 'c')
		d->i_len = 1;
}

void	set_s_len_and_nullprotect(t_data *d)
{
	if (!d->i_len && d->insert == NULL)
		get_empty_str(d);
	d->s_len = d->s_len - d->f_len + d->i_len;
}

void	set_lengths(t_data *d)
{
	set_i_len(d);
	set_s_len_and_nullprotect(d);
}
