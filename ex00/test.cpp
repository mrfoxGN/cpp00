#include <iostream>
#include <cctype>
/*class person
{
    public:
        int age;
        std::string name;
        void print(void)
        {
            std::cout <<"helloo guys " << name <<std::endl;
        }
};
int main()
{
    person a;
    a.age=42;
    a.name="anass";
    a.print();
}*/
void print_upper(char *str)
{
    while(*str)
    {
        if(std::isalpha(*str))
            std::cout << (char)std::toupper(*str);
        else
            std::cout << (char)*str;
        str++;
    }
}
int main(int ac,char **av)
{
    int i = 1;
    int j;
    if(ac==1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        while(av[i])
        {
            j=0;
            while(av[i][j])
            {
                if(std::isalpha(av[i][j]))
                    std::cout <<(char)std::toupper(av[i][j]);
                else
                    std::cout << av[i][j];
                j++;
            }
            i++;
        }
    }
}