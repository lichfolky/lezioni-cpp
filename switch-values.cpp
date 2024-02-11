// https://www.digitalocean.com/community/tutorials/compare-strings-in-c-plus-plus

#include <iostream>

#include <string.h>

int main()
{
    int val1 = 4;
    int val2 = 2;
    std::cout << "val 1: " << val1 << " val 2: " << val2 << std::endl;
    int aux = val1;
    val1 = val2;
    val2 = aux;
    std::cout << "val 1: " << val1 << " val 2: " << val2 << std::endl;
}