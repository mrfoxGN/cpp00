#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
class Contact
{
    private:
    std::string first_name;
    std::string last_name;
    std::string nickname_name;
    std::string phone_number;
    std::string darkest_secret;

    public:
    Contact();
    ~Contact(void);
    void set_info(std::string firsr_name,std::string last_name,std::string nickname,
        std::string phone_num,std::string darkest_secret);
    void show_infos(void);
    std::string get_first_name(void);
    std::string get_last_name(void);
    std::string get_nickname(void);
    std::string get_phone_num(void);
    std::string get_darkest_secret(void);
     
     
};

#endif