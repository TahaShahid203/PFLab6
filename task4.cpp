#include <iostream>
using namespace std;


string checkSpeed(float);

main()
{
    float speed;
    cout << "Enter speed: ";
    cin >> speed;

    string remarks = checkSpeed(speed);

    cout << "Your speed is " << remarks << endl;
}

string checkSpeed(float speed)
{
    string remarks;

    if (speed <=10)
    {
        remarks = "slow";
    }
    else if (speed > 10 && speed <=50)
    {
        remarks = "average";
    }
    else if (speed > 50 && speed <=150)
    {
        remarks = "fast";
    }
    else if (speed > 150 && speed <=1000)
    {
        remarks = "ultra-fast";
    }
    else if (speed > 1000)
    {
        remarks = "extremely fast";
    }
    return remarks;
}