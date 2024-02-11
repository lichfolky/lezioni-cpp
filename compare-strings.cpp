// https://www.digitalocean.com/community/tutorials/compare-strings-in-c-plus-plus

#include <iostream>

#include <string.h>

int main()
{
    const char *str1 = "Gatto";
    const char *str2 = "Cane";
    const char *str3 = "Cane";

    std::cout << "String 1: " << str1 << std::endl;
    std::cout << "String 2: " << str2 << std::endl;
    std::cout << "String 3: " << str3 << std::endl;

    if (strcmp(str1, str2) == 0)
        std::cout << "\nLe stringhe 1 e 2 sono uguali." << std::endl;
    else
        std::cout << "\nLe stringhe 1 e 2 non sono uguali." << std::endl;

    if (str2 == str3)
        std::cout << "\nLe stringhe 1 e 2 sono uguali." << std::endl;
    else
        std::cout << "\nLe stringhe 1 e 2 non sono uguali." << std::endl;

    if (str1 == str2)
        std::cout << "\nLe stringhe 1 e 2 sono uguali." << std::endl;
    else
        std::cout << "\nLe stringhe 1 e 2 non sono uguali." << std::endl;
}