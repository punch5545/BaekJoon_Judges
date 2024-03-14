/*
첫째 줄에 행렬의 크기 N 과 M이 주어진다. 둘째 줄부터 N개의 줄에 행렬 A의 원소 M개가 차례대로 주어진다. 

이어서 N개의 줄에 행렬 B의 원소 M개가 차례대로 주어진다. N과 M은 100보다 작거나 같고, 행렬의 원소는 절댓값이 100보다 작거나 같은 정수이다.

출력
첫째 줄부터 N개의 줄에 행렬 A와 B를 더한 행렬을 출력한다. 행렬의 각 원소는 공백으로 구분한다.

*/


#include <iostream>

int main()
{
    int N, M;

    std::cin >> N >> M;

    int** A = (int**)malloc(sizeof(int*) * (M));
    int** B = (int**)malloc(sizeof(int*) * (M));

    for(int m = 0; m < M; m++)
    {
        A[m] = (int*)malloc(sizeof(int) * (N));
        for(int n = 0; n < N; n++)
        {
            std::cin >> A[m][n];
        }
    }

    for(int m = 0; m < M; m++)
    {
        B[m] = (int*)malloc(sizeof(int) * (N));
        for(int n = 0; n < N; n++)
        {
            std::cin >> B[m][n];
        }
    }

    for(int m = 0; m < M; m++)
    {
        for(int n = 0; n < N; n++)
        {
            std::cout << A[m][n] + B[m][n];

            if (n < N - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    
    for(int i = M - 1; i >= 0; i--)
    {
        free(A[i]);
        free(B[i]);
    }
    free(A);
    free(B);
}