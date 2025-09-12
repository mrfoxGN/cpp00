#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "includes.hpp"
class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();
        ~Contact();
        void set_infos(std::string fn, std::string ln,std::string nn,std::string num,std::string ds);
        std::string get_darkest_secret(void);
        std::string get_number(void);
        void display_contact(void);
        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
};
#endif
