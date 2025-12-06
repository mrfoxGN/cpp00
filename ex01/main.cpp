/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <anguenda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:36:26 by anguenda          #+#    #+#             */
/*   Updated: 2025/12/06 16:36:27 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PhoneBook.hpp"
#include <cstdlib>

bool	str_isnum(std::string str)
{
	for (size_t cur = 0; cur < str.length(); cur++)
		if ((str[cur] < '0' || str[cur] > '9') && str[cur] != '-')
			return false;
	return true;
}


int	main(void)
{
	PhoneBook	phonebook;
	bool		run;

	run = true;
	std::cout << "=====Welcome phonebook. type ADD to add a contact, SEARCH to find a contact or EXIT=========" << std::endl;
	while (run)
	{
		std::string query;
		getinput(query, "$> ");

		if (!query.compare("ADD"))
			phonebook.add_contact();
		else if (!query.compare("EXIT"))
			run = false;
		else if (!query.compare("SEARCH"))
		{
			if (phonebook.get_size() > 0)
			{
				std::string	index;
				phonebook.list_contacts();
				getinput(index, "\tIndex of the contact to display: ");
				std::cout << std::endl;
				if (str_isnum(index))
					phonebook.display_contact(atoi(index.c_str()));
				else
					std::cout << "\tPlease type only numbers" << std::endl;
				std::cout << std::endl;
			}
			else
				std::cout << "\tNothing to show" << std::endl;
		}
		else if (query.length() > 0)
			std::cout << "Error : This phonebook only accepts the ADD, SEARCH or EXIT commands." << std::endl;
	}
	return (0);
}
