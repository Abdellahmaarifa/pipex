/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   throw_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaarifa <amaarifa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:29:47 by amaarifa          #+#    #+#             */
/*   Updated: 2022/02/19 15:51:38 by amaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	throw_error(char *s)
{
	if (!s)
	{
		perror(0);
		exit(1);
	}
	write(2, s, ft_strlen(s));
	exit(1);
}
