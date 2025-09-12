#include "contact.hpp"

Contact::Contact()
{
    return ;
}
Contact::~Contact()
{
    return ;
}
void Contact::set_infos(std::string fn, std::string ln,std::string nn,std::string num,std::string ds)
{
    this->first_name = fn;
    this->last_name = ln;
    this->nickname = nn;
    this->phone_number = num;
    this->darkest_secret = ds;
}
std::string Contact::get_number(void)
{
    unsigned int size1 = 10;
    if (size1 > 0 && this->phone_number.length() > size1)
    {
        std::string phone_number;
        phone_number = this->phone_number.substr(0, size1 - 1);
        phone_number.push_back('.');
        return phone_number;
    }
    return(this->phone_number);
}
std::string Contact::get_darkest_secret(void)
{
    unsigned int size1 = 10;
    if (size1 > 0 && this->darkest_secret.length() > size1)
    {
        std::string darkest_secret;
        darkest_secret = this->darkest_secret.substr(0, size1 - 1);
        darkest_secret.push_back('.');
        return darkest_secret;
    }
    return(this->darkest_secret);
}
void Contact::display_contact(void)
{
    std::cout << "\tFirst name: \t" << this->first_name << std::endl;
    std::cout << "\tLast name: \t" << this->last_name << std::endl;
    std::cout << "\tNickname: \t" << this->nickname << std::endl;
    std::cout << "\tPhone number: \t" << this->phone_number << std::endl;
    std::cout << "\tDarkest secret: \t" << this->darkest_secret << std::endl;
}

std::string Contact::get_last_name(void)
{
    unsigned int size1 = 10;
    if (size1 > 0 && this->last_name.length() > size1)
    {
        std::string last_name;
        last_name = this->last_name.substr(0, size1 - 1);
        last_name.push_back('.');
        return last_name;
    }
    return(this->last_name);
}
std::string Contact::get_first_name(void)
{
    unsigned int size1 = 10;
    if (size1 > 0 && this->first_name.length() > size1)
    {
        std::string first_name;
        first_name = this->first_name.substr(0, size1 - 1);
        first_name.push_back('.');
        return first_name;
    }
    return(this->first_name);
}
std::string Contact::get_nickname(void)
{
    unsigned int size1 = 10;
    if (size1 > 0 && this->nickname.length() > size1)
	{
		std::string nickname;
		nickname = this->nickname.substr(0, size1 - 1);
		nickname.push_back('.');
		return nickname;
    }
    return(this->nickname);
}