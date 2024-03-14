
#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;

    int len = str.length();
    bool is_palindrome = true;

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            is_palindrome = false;
            break;
        }
    }

    std::cout << is_palindrome;
    
    return 0;
}