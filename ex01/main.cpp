#include "includes.hpp"
#include "PhoneBook.hpp"
void get_input(std::string &input, std::string prompt)
{
    std::cout << prompt;
    std::getline(std::cin, input);
}
bool is_number(const std::string& s)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if (!std::isdigit(s[i]))
            return false;
    }
    return true;
}
int main()
{
    PhoneBook pb;
    std::string command;
    std::string index_str;
    int index;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            pb.add_contact();
        }
        else if (command == "SEARCH")
        {
            pb.list_contacts();
            std::cout << "Enter the index of the contact to view details: ";
            std::getline(std::cin, index_str);
            if (is_number(index_str))
            {
                index = std::atoi(index_str.c_str());
                pb.show_contact(index);
            }
            else
            {
                std::cout << "Invalid input. Please enter a valid index." << std::endl;
            }
        }
        else if (command == "EXIT")
        {
            break;
        }
        else
        {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }
    return 0;
}