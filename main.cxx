/** 
 * Small side project by Torstein
 * Version 1.1
*/
#include <iostream>
#include <vector>
#include <string>

#define Failed_Exit_Code 1
#define Sucsess_Exit_Code 0


void allicator()
{
    system("clear");
    std::vector<int> gt1 = {};
    std::cout << "Claiming stack memory...";

    for (unsigned long long i = 0; true; i++)
    {gt1.push_back(i);}
}


int main()
{
    char x = '0';
    std::cout << "This software is memory intensive, do you want to run it? ";
    std::cin >> x;

    switch (x)
    {
    case 'y':
    allicator();
    break;
    case 'Y':
    allicator();
    break;
    case 'n':
    std::terminate();
    break;
    case 'N':
    std::terminate();
    break;
    default:
    std::cout << "Error invalid input, Process terminating...";
        return Failed_Exit_Code;
    }
    return Sucsess_Exit_Code;
}
