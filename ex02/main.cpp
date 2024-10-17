/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:44:40 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/15 10:46:01 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    FragTrap fragTrap("Fraggy");
    fragTrap.attack("Enemy");
    fragTrap.takeDamage(20);
    fragTrap.beRepaired(10);
    fragTrap.highFivesGuys();
}
