/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mess_err.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <pcorlys-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:19:33 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/10/12 10:59:04 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	mess_err(int num)
{
	if (num == 0)
		ft_printf("Не была выделена память. Чекай маллок\n");
	if (num == 1)
		ft_printf("Укажите один аргумент - файл карты\n");
	if (num == 2)
		ft_printf("Файл карты не был открыт\n");
	if (num == 3)
		ft_printf("Карта должна быть ограничена стенами\n");
	if (num == 4)
		ft_printf("Карта не квадратная\n");
	if (num == 5)
		ft_printf("На карте неправильные метки игрока\n");
	if (num == 7)
		ft_printf("SDL - не был инициализирован\n");
	if (num == 8)
		ft_printf("SDL окно - не было инициализировано\n");
	if (num == 9)
		ft_printf("SDL рендер - не был инициализирован\n");
	if (num == 10)
		ft_printf("Картинка не была загружена на плоскость\n");
	if (num == 11)
		ft_printf("Текстура не была создана\n");
	if (num == -1)
		ft_printf("Невалидная карта\n");
	exit(0);
}

void	esc(int a)
{
	if (a == 1)
		ft_printf("Вы закрыли окно\n");
	exit(0);
}
