#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"
class PhoneBook
{
    private:
        Contact contacts[8];
        int size;
    public:
    PhoneBook();
    ~PhoneBook();
    void add_contact();
    void list_contacts();
    void show_contact(int index);
};
#endif