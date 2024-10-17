/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:38:50 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/15 10:42:01 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " has been created." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap " << this->_name << " has been copied." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << " has been destroyed." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    std::cout << "FragTrap operator has been assigned." << std::endl;
    return *this;
}

void FragTrap::attack(const std::string& target) {
    if (this->_hitPoints > 0 && this->_energyPoints > 0) {
        this->_energyPoints--;
        std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "FragTrap " << this->_name << " can't attack because it has no hit points or energy points left." << std::endl;
    }
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " requests a positive high fives!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints > amount) {
        this->_hitPoints -= amount;
    } else if (this->_hitPoints > 0) {
            this->_hitPoints = 0;
    } else {
        std::cout << "FragTrap " << this->_name << " can't take damage because already dead." << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints > 0 && this->_energyPoints > 0) {
        this->_energyPoints--;
        this->_hitPoints += amount;
        std::cout << "FragTrap " << this->_name << " repairs itself for " << amount << " points!" << std::endl;
    } else {
        std::cout << "FragTrap " << this->_name << " can't repair itself because it has no hit points or energy points left." << std::endl;
    }
}

