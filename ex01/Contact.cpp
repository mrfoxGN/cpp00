#include "Contact.hpp"
/*# include <string>
# include <iomanip>
# include <stdlib.h>
# include <limits>*/

Contact::Contact()
{
    return;
}
Contact::~Contact(void)
{
    return;
}
void Contact::set_info(std::string firsr_name,std::string last_name,std::string nickname,
        std::string phone_num,std::string darkest_secret)
        {
            this->first_name=firsr_name;
            this->last_name=last_name;
            this->nickname_name=nickname;
            this->phone_number = phone_num;
            this->darkest_secret= darkest_secret;
        }
std::string Contact::get_first_name(void)
{
    long unsigned int  size = 10;
    if(this->first_name.length() > size)
    {
        std::string first_name;
        first_name = this->first_name.substr(0,size -1);
        first_name.push_back('.');
        return(first_name);
    }
    return(this->first_name);
}
std::string Contact::get_last_name(void)
{
   long unsigned int  size = 10;
    if(this->last_name.length() > size)
    {
        std::string last;
        last = this->last_name.substr(0,size -1);
        last.push_back('.');
        return(last);
    }
    return(this->last_name);
}
std::string Contact::get_nickname(void)
{
    long unsigned int  size = 10;
    if(this->nickname_name.length() > size)
    {
        std::string nickimenaj;
        nickimenaj = this->nickname_name.substr(0,size -1);
        nickimenaj.push_back('.');
        return(nickimenaj);
    }
    return(this->nickname_name);
}
std::string  Contact::get_phone_num(void)
{
    return(this->phone_number);
}
std::string Contact::get_darkest_secret(void)
{
    return(this->darkest_secret);
}
void Contact::show_infos(void)
{
    std::cout<<"=====informations======"<< std::endl;
    std::cout<<"First name: "<< this->first_name << std::endl;
    std::cout<<"Last name: "<< this->last_name << std::endl;
    std::cout<<"Nickname: "<< this->nickname_name << std::endl;
    std::cout<<"Phone number: "<< this->phone_number << std::endl;
    std::cout<<"Darkest secret: "<< this->darkest_secret << std::endl; 
}