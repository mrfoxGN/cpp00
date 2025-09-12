#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->size=0;
}
PhoneBook::~PhoneBook()
{
    return ;
}
void PhoneBook::add_contact()
{
    std::string fn;
    std::string ln;
    std::string nn;
    std::string num;
    std::string ds;
    if(this->size < 8)
    {
        get_input(fn, "Enter first name: ");
        get_input(ln, "Enter last name: ");
        get_input(nn, "Enter nickname: ");
        get_input(num, "Enter phone number: ");
        get_input(ds, "Enter darkest secret: ");
        this->contacts[this->size].set_infos(fn, ln, nn, num, ds);
        this->size++;
    }
    else
        std::cout << "Phonebook is full" << std::endl;
}
void PhoneBook::list_contacts()
{
    std::cout << "\t---index--|-fistname-|-lastname-|-nickname" << std::endl;
    for(int i=0;i<this->size;i++)
    {
        std::cout << "\t    " << std::setw(10) << i;
        std::cout <<"|" << std::setw(10)  << this->contacts[i].get_first_name();
        std::cout <<"|" << std::setw(10)  << this->contacts[i].get_last_name();
        std::cout <<"|" << std::setw(10)  << this->contacts[i].get_nickname()<< "|";
        std::cout << std::endl;
    }
    std::cout << "---------------------------------------------------------------------" << std::endl;
}
void PhoneBook::show_contact(int index)
{
    if(index <this->size && index >= 0)
        this->contacts[index].display_contact();
    else
        std::cout << "Invalid index" << std::endl;
}