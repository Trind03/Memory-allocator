#include <iostream>
#include <vector>
#include <string>
std::vector<int> gt1 = {};

void flood()
{
    system("clear");
    std::cout << "Claiming stack memory...";
    for (unsigned int i = 0; i != -1; i++)
    {gt1.push_back(i);}
}

int main()
{
    char x = '0';
    std::cout << "Yea or Nah";
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