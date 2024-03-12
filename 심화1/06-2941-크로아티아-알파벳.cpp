#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> chroatian = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    std::string str;

    std::cin >> str;
    int len = str.length();

    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        int index = str.find(chroatian[i]);
        int currentLen = chroatian[i].length();
        while (index != std::string::npos)
        {
            str.replace(index, currentLen, "a");
            index = str.find(chroatian[i]);
        }
    }

    std::cout << str.length();
}