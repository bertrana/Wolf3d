/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <pcorlys-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:25:16 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/08/18 15:16:15 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  x - стены
 * 	z = игрок
 *	20 - высота
 *	20 - ширина
 *
 */

# include "../includes/wolf.h"

void			check_map(char *str)
{
	int		fd;
	int 	q;
	char	*line;
	int		height;
	int		man;

	q = 0;
	height = 0;
	man = 0;
	if (!(fd = open(str, O_RDONLY)))
		mess_err(2);
	while (get_next_line(fd, &line))
	{
		height++;
		if (height > 20)
			mess_err(4);
		while (line[q])
		{
			if (q > 19)
				mess_err(6);
			if (line[q] == 'z')
				man++;
			if (height == 1)
			{
				if (line[q] != 'x')
					mess_err(3);
			}
			if (height == 20)
			{
				if (line[q] != 'x')
					mess_err(3);
			}
			if (q == 0)
			{
				if (line[q] != 'x')
					mess_err(3);
			}
			if (line[q + 1] == '\0')
			{
				if (line[q] != 'x')
					mess_err(3);
			}
			q++;
		}
		q = 0;
	}
	if (man > 1 || man < 1)
		mess_err(5);
	close(fd);
	return;
}