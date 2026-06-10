#include <stdio.h>

int main()
{

    int cricketScores[4][2] = {
        {185, 172},
        {210, 198},
        {156, 167},
        {220, 219}};

    int matches = 4;
    int teams = 2;

    printf("=== IPL Highest Score Per Match ===\n");
    for (int i = 0; i < matches; i++)
    {
        int highest = cricketScores[i][0];

        for (int j = 1; j < teams; j++)
        {
            if (cricketScores[i][j] > highest)
            {
                highest = cricketScores[i][j];
            }
        }
        printf("Match %d → Team Scores: %d vs %d → Highest: %d\n",
               i + 1,
               cricketScores[i][0],
               cricketScores[i][1],
               highest);
    }
    return 0;
}