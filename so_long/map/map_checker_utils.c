/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:24:25 by mvolpi            #+#    #+#             */
/*   Updated: 2022/03/14 11:24:26 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

int	valid_char(char c)
{
	if (c == '1' || c == '0' || c == 'C' || c == 'E' || c == 'P'
		|| c == 'H' || c == 'V' || c == 'F')
		return (TRUE);
	return (FALSE);
}

int	valid_uniquechar(char c, char checker, t_bool *bool)
{
	if (c == checker && *bool == FALSE)
		*bool = TRUE;
	else if (c == checker && *bool == TRUE)
		return (FALSE);
	return (TRUE);
}

int	valid_border(char c, t_vector point, t_vector size)
{
	if (point.y == 0 || point.x == 0
		|| point.y == size.y - 1 || point.x == size.x - 1)
		if (c != '1')
			return (FALSE);
	return (TRUE);
}
