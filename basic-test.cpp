// Hello world

#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout << "Digita s o n: ";
    cin >> letter;
    if (letter == 'n')
    {
        cout << "Hai inserito " << letter << ": n" << endl;
    }
    else
    {
        cout << "Hai inserito " << letter << ": s" << endl;
    }
    return 0;
}