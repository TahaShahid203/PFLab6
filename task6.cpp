#include <iostream>
using namespace std;

main()
{
    int kilometers;
    string time;
    float price;

    cout << "Enter kilometers: ";
    cin >> kilometers;

    cout << "Enter time: ";
    cin >> time;

    if (kilometers < 20)
    {
        if (time == "Day")
        {
            price = 0.7 + 0.79*kilometers;
        }
        else
        {
            price = 0.7 + 0.9*kilometers;
        }
    }

    if (kilometers >=20 && kilometers < 100)
        {
            price = 0.09*kilometers;
        }
    else if (kilometers >= 100)
        {
            price = 0.06*kilometers;
        }
    
    cout << price;
}