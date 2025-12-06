/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <anguenda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:35:50 by anguenda          #+#    #+#             */
/*   Updated: 2025/12/06 16:35:51 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(int ac,char **av)
{
    int i =1;
    int j;
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                if(av[i][j] >= 'a' && av[i][j]<='z')
                {
                    std::cout << (char)std::toupper(av[i][j]);
                }
                else
                    std::cout << av[i][j];
                j++;
            }
            i++;
        }
        std::cout << std::endl;

    }
}