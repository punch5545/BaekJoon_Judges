#include <iostream>
#include <string>
#include <vector>

// TODO

int main()
{
    int strCnt = 0;
    int cnt = 0;

    std::cin >> strCnt;

    for (int word = 0; word < strCnt; word++)
    {
        bool breakWord = false;
        std::string str;
        std::string tmpStr;
        int strLength = 0;
        std::cin >> str;

        int tmpIndex = -1;
        strLength = str.length();

        tmpStr = str;

        for (int i = 0; i < strLength; i++)
        {
            int index = tmpStr.find(str[i]);
            while (index != std::string::npos)
            {
                //std::cout << str << " :: " << index << " :::: " << tmpStr << " :: " << tmpIndex << " :: " << (tmpIndex != index - 1) << std::endl;
                tmpStr.replace(index, 1, ".");
                if (tmpIndex != index - 1)
                {
                    breakWord = true;
                }
                tmpIndex = index;

                index = tmpStr.find(str[i]);
            }
            if (breakWord) break;
        }

        //std::cout << "Dupl: " << breakWord << std::endl;

        if (!breakWord) cnt++;
    }

    std::cout << cnt;

    return 0;
}