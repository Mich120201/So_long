/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:18:27 by mvolpi            #+#    #+#             */
/*   Updated: 2022/03/14 15:16:08 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	error(char *message)
{
	printf("\033[1;31m" " Error\n    %s\n" "\033[0m", message);
	return (0);
}

void	*null_error(char *message)
{
	printf("\033[1;31m" " Error\n %s\n" "\033[0m", message);
	return (0);
}

void	print_warning(char *message)
{
	printf("\033[1;31m" " Warning\n %s\n" "\033[0m", message);
}
