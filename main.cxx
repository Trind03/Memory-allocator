/** 
 * Developed by Torstein and is a small side progect
 * 
*/
#include <iostream>
#include <vector>
#include <string>


int main()
{
    char x = '0';
    std::cout << "This software memory intensive, do you want to run it? ";
    std::cin >> x;

    switch (x)
    {
    case 'y':
    flood();
    break;
    case 'Y':
    flood();
    break;
    case 'n':
    std::terminate();
    break;
    case 'N':
    std::terminate();
    break;
    default:
        break;
    }
    return 0;
}

void flood()
{
    system("clear");
    std::vector<int> gt1 = {};
    std::cout << "Claiming stack memory...";

    for (unsigned int i = 0; true; i++)
    {gt1.push_back(i);}
}

