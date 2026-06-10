#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
};

struct MovieShow
{
    char movie[100];
    int screen;
    struct Time showTime;
};

int main()
{

    struct MovieShow currentShow = {
        "Inception",
        3,
        {21, 45}};

    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n",
           currentShow.movie,
           currentShow.screen,
           currentShow.showTime.hours,
           currentShow.showTime.minutes);

    return 0;
}