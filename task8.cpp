#include <iostream>
using namespace std;

float Cost(int noOfPeople, float budget, string type);

main()
{
    int noOfPeople;
    string typeOfTicket;
    float budget, cost;

    cout << "Enter budget: ";
    cin >> budget;

    cout << "Enter type of ticket: ";
    cin >> typeOfTicket;

    cout << "Enter number of people travelling: ";
    cin >> noOfPeople;

    cost = Cost(noOfPeople, budget, typeOfTicket);

    if (cost < budget)
    {
        float amountLeft = budget - cost;
        cout << "Yes. There's still " << amountLeft << " QR left" << endl;
    }
    else
    {
        float amountRequired = cost - budget;
        cout << "No. They need " << amountRequired << " QR to make the trip." << endl;
    }
}


float Cost(int noOfPeople, float budget, string type)
{
    float cost, transportation, ticket;

    if (noOfPeople >=1 && noOfPeople <= 5)
    {
        transportation = 75;
    }
    
    
    else if (noOfPeople >=5 && noOfPeople <= 9)
    {
        transportation = 60;
    }
    else if (noOfPeople >=10 && noOfPeople <= 24)
    {
        transportation = 50;
    }
    else if (noOfPeople >=25 && noOfPeople <= 49)
    {
        transportation = 40;
    }
    else if (noOfPeople>=50)
    {
        transportation = 25;
    }

    if (type == "VIP")
    {
        ticket = 499.99;
    }
    else if (type == "Normal")
    {
        ticket = 249.99;
    }

    transportation = transportation * budget * 0.01;

    ticket = ticket * noOfPeople;

    cost = transportation + ticket;

    return cost;
}


