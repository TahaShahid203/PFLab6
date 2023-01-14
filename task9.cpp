#include <iostream>
#include <cmath>
using namespace std;

float volleyBall(string year, int holidays, int visitsToHome);

main()
{
    string year;
    int holidays, visitsToHome;
    float playTime;


    while (true)
    {
        cout << "Is the year normal or leap? ";
        cin >> year;

        cout << "Enter his number of holidays: ";
        cin >> holidays;

        cout << "Enter the number of weekends spent at hometown: ";
        cin >> visitsToHome;

        playTime = volleyBall(year, holidays, visitsToHome);

        cout << "He plays volleyball " << playTime << " times." << endl;
    }
    

}

float volleyBall(string year, int holidays, int visitsToHome)
{
    float playTime;


    playTime = (2/3.0)*holidays + (3/4.0)*(48-visitsToHome) + visitsToHome;

    if (year == "leap")
    {
        playTime = playTime + (15/100.0)*playTime;
    }

    playTime = floor(playTime);

    return playTime;

}