/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <anguenda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:36:49 by anguenda          #+#    #+#             */
/*   Updated: 2025/12/06 16:36:51 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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