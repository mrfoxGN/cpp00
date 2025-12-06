/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <anguenda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:36:43 by anguenda          #+#    #+#             */
/*   Updated: 2025/12/06 16:36:44 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PhoneBook.hpp"
#include <iomanip>
#include <stdlib.h>
PhoneBook::PhoneBook(void)
{
    this->size = 0;
}
PhoneBook::~PhoneBook(void)
{
    return;
}
int PhoneBook::get_size(void)
{
    return(this->size);
}
void getinput(std::string &s,std::string text)
{
    for (;;)
    {
        std::cout << text;
        if (!std::getline(std::cin, s))
        { std::cout << std::endl; std::exit(0); }

        if (s.empty())
            continue;

        size_t i = 0;
        while (i < s.size() && std::isprint((unsigned char)s[i]))
            ++i;
        if (i == s.size())         
            return;
    }
}
void PhoneBook::add_contact()
{
    std::string first_name;
    std::string last_name;
    std::string nickname_name;
    std::string num_phone;
    std::string darkest_secrest;
    getinput(first_name,"\tFIRST NAME 🦊:");
    getinput(last_name,"\tLast NAME 🦊:");
    getinput(nickname_name,"\tNickNAME 🦊:");
    getinput(num_phone,"\t NUmber Phone 📞:");
    getinput(darkest_secrest,"\tDARKEST SECRET 🕸🕸:");
    if (this->size == 8)
	{
		this->size--;
		for (int i = 0; i < this->size; i++)//add more than 8    last replace the first one 
		{
			this->contacts[i].set_info(
				this->contacts[i + 1].get_first_name(),
				this->contacts[i + 1].get_last_name(),
				this->contacts[i + 1].get_nickname(),
				this->contacts[i + 1].get_phone_num(),
				this->contacts[i + 1].get_darkest_secret()
			);
		}
	}
    this->contacts[this->size].set_info(first_name,last_name,nickname_name,num_phone,darkest_secrest);
    if(this->size < 8)
    {
        this->size++;
    }
}
    void	PhoneBook::list_contacts(void)
{
	std::cout << "\t---INDEX----FIRST NAME--LAST_NAME--NICKNAME--" << std::endl;
	for (int i = 0; i < this->size; i++)
	{
		std::cout << "\t|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << this->contacts[i].get_first_name();
		std::cout << "|" << std::setw(10) << this->contacts[i].get_last_name();
		std::cout << "|" << std::setw(10) << this->contacts[i].get_nickname();
		std::cout << "|" << std::endl;
	}
	std::cout << "\t---------------------------------------------" << std::endl;
}
void	PhoneBook::display_contact(int index)
{
	if (index < this->size && index >= 0)
		this->contacts[index].show_infos();
	else
		std::cout << "\tIndex must be between 0 and " << this->size - 1 << std::endl;
}
