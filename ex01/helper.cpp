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
    return(this->phone_number);
}
std::string Contact::get_darkest_secret(void)
{
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
std::string Contact::get_first_name(void)
{
    return(this->first_name);
}
std::string Contact::get_last_name(void)
{
    return(this->last_name);
}
std::string Contact::get_nickname(void)
{
    return(this->nickname);
}