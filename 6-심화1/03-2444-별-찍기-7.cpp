#include <iostream>

int main()
{
	int cnt = 0;

	std::cin >> cnt;

	int dest = cnt * 2 - 1;

	for (int i = 0; i < dest; i++)
	{
		int starCnt = i < cnt ? 2 * i + 1 : 2 * (dest - i - 1) + 1;
		int blankCnt = i < cnt ? cnt - i - 1 : i - cnt + 1;

		for (int j = 0; j < blankCnt; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < starCnt; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}