#include <iostream>
#include <string>
#include <vector>

// TODO

int main()
{
    int strCnt = 0;
    int cnt = 0;

    std::cin >> strCnt;

    for(int i = 0; i < strCnt; i++)
    {
        std::string tmpStr;
        std::cin >> tmpStr;

        for(int j = 0; j < tmpStr.length(); j++)
        {
            bool isDuplicate = false;
            int index = tmpStr.find(tmpStr[j]);
            while (index != std::string::npos)
            {
                tmpStr.replace(index, 1, "");
                int idx = tmpStr.find(tmpStr[j]);
                std::cout << idx<< " " << index << " " << tmpStr << " " << tmpStr[j] << std::endl;
                if(idx != index + 1 && idx != std::string::npos)
                {
                    isDuplicate = true;
                }
                index = idx;
            }

            if(!isDuplicate) cnt++;
        }
    }  

    std::cout << cnt;

    return 0;
}