// Title:
// PUrpose:
// Author:

#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main()
{
    char userIn[20];
    char choice;
    cout << endl << "Cstring - Strlen-" << endl;
    cout << "input a string: ";
    cin >> userIn;
    cout << endl;
    cout << "The input is [" <<userIn << "]" << endl;
    cout << "Would you like to see the length of the string Y/N ?";
    cin >> choice;
    cout << endl;
    if(choice == 'Y')
    {
        int lenChr = 0;
        lenChr = strlen(userIn);
        cout << "The length of string [" << userIn << "] is [" << lenChr << "]" << endl;
    } else if (choice == 'N')
    {
        cout << "Exit Program" << endl;
    } else
    {
        cerr << "Invalid Input ";
        cout << endl << "Exit Program" << endl;
    }
    return 0;
}
