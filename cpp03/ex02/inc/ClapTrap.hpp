/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abied-ch <abied-ch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:27:17 by abied-ch          #+#    #+#             */
/*   Updated: 2024/01/05 18:27:20 by abied-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>

class ClapTrap{
	protected:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;

	public:
		ClapTrap();
		ClapTrap(const std::string);
		ClapTrap(const ClapTrap &other);
		virtual ~ClapTrap();

		virtual ClapTrap &operator = (const ClapTrap &other);

		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		virtual void attack(const std::string &target);
		virtual std::string getName() const;
		virtual unsigned int getHitPoints() const;
		virtual unsigned int getEnergyPoints() const;
		virtual unsigned int getAttackDamage() const;
};

std::ostream &operator << (std::ostream &out, const ClapTrap &clapTrap);