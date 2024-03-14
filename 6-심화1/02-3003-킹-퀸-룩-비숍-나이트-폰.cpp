#include <iostream>

int main()
{

    int k, q, l, b, kn, p;

    std::cin >> k >> q >> l >> b >> kn >> p;

    printf("%d %d %d %d %d %d", 1 - k, 1 - q, 2 - l, 2 - b, 2 - kn, 8 - p);
}