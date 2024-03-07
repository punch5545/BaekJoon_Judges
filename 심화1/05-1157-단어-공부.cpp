#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;
    int len = str.length();
    
    int alphabetCount[26] = { 0 };

    for (int i = 0; i < len; i++)
    {
        int index = str[i] - 'a';
        if (index < 0)
        {
            index = str[i] - 'A';
        }
        alphabetCount[index]++;
    }

    int maxCount = 0;
    int maxIndex = 0;
    bool isDuplicate = false;

    for (int i = 0; i < 26; i++)
    {
        if (alphabetCount[i] > maxCount)
        {
            maxCount = alphabetCount[i];
            maxIndex = i;
            isDuplicate = false;
        }
        else if (alphabetCount[i] == maxCount)
        {
            isDuplicate = true;
        }
    }

    if (isDuplicate)
    {
        std::cout << '?';
    }
    else
    {
        std::cout << (char)(maxIndex + 'A');
    }

    return 0;
}