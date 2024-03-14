#include <iostream>

int main()
{
    int arr[9][9] = { 0 };

    int maximum = 0;
    int maxRow = 0, maxCol = 0;

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            std::cin >> arr[j][i];

            bool larger = maximum < arr[j][i];
            maximum = larger ? arr[j][i] : maximum;
            maxRow = larger ? i : maxRow;
            maxCol = larger ? j : maxCol;
        }
    }

    printf("%d\n%d %d", maximum, maxRow + 1, maxCol + 1);
}