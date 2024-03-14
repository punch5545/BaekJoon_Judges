#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::map<std::string, float> scoreTable =
    {
        { "A+", 4.5f },
        { "A0", 4.0f },
        { "B+", 3.5f },
        { "B0", 3.0f },
        { "C+", 2.5f },
        { "C0", 2.0f },
        { "D+", 1.5f },
        { "D0", 1.0f },
        { "P", 0.0f },
        { "F", 0.0f }
    };

    std::vector<float> scores = { 1.f, 2.f, 3.f, 4.f };

    float totalGradeScore = 0.0f;
    float totalScore = 0.0f;

    for (int i = 0; i < 20; i++)
    {
        std::string className, grade;
        float score = 0.f;
        std::cin >> className >> score >> grade;


        if (std::find(scores.begin(), scores.end(), score) == scores.end())
        {
            i--;
            continue;
        }
        if (grade == "P") continue;


        // 전공평점은 전공과목별 (학점 × 과목평점)의 합을 학점의 총합으로 나눈 값이다.
        auto sc = scoreTable.find(grade);
        if (sc != scoreTable.end())
        {
            totalScore += score;
            totalGradeScore += (sc->second * score);
        }
    }
    if (totalScore != 0) totalGradeScore /= totalScore;

    printf("%f", totalGradeScore);
}