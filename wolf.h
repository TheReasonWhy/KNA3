/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revan-wy <revan-wy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 17:50:27 by revan-wy          #+#    #+#             */
/*   Updated: 2018/09/08 13:50:19 by revan-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF_H
# define WOLF_H

# include "mlx.h"
# include <stdlib.h>
# include <math.h>
# include <stdio.h> //forbidden lib
# include "libft.h"

# define WINWIDTH 640
# define WINHEIGHT 420
# define MAPWIDTH 24
# define MAPHEIGHT 24
# define UP_ARROW 126
# define DOWN_ARROW 125
# define LEFT_ARROW 123
# define RIGHT_ARROW 124
# define ESCAPE_KEY 53
# define MOVE_SPEED 1

typedef struct  s_data
{
    //int worldMap[MAPWIDTH][MAPHEIGHT];
    double dirX;
    double posX;
    double posY;
    double dirY;
    void *gsci;
    void *win;
}               t_data;

	/*up 126
	down 125
	left 123
	right 124*/


#endif
