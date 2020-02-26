/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutik <amoutik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:42:11 by amoutik           #+#    #+#             */
/*   Updated: 2020/02/05 10:25:26 by amoutik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "quote.h"

void	free_string(t_string *str)
{
	ft_strdel(&str->string);
}