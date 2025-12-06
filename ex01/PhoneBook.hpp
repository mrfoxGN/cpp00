#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
class PhoneBook
{
    private:
        Contact contacts[8];
        int size;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        
        int get_size();
        void add_contact();
        void list_contacts();
        void display_contact(int index);
};

void getinput(std::string &str,std::string text);

#endif