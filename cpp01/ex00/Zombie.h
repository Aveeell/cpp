/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:51:25 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:51:26 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif