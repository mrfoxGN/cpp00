#include "PhoneBook.hpp"
#include <iomanip>
//#include <stdlib.h>
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
void getinput(std::string &str,std::string text)
{
    str.clear();
    while(str.empty())
    {
        std::cout<< text;
        std::getline(std::cin,str);
        if(std::cin.eof())
        {
            std::cout << std::endl;
            exit(0);
        }
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
