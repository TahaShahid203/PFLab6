#include <iostream>
using namespace std;


float Cost(string, string, int);


main()
{
    string city, product;
    int quantity;
    float totalCost;

    cout << "Enter city: ";
    cin >> city;

    cout << "Enter product: ";
    cin >> product;

    cout << "Enter quantity of the product bought: ";
    cin >> quantity;

    totalCost = Cost(city, product, quantity);

    cout << "Your total cost is: " << totalCost << endl;
}


float Cost(string city, string product, int quantity)
{
    float costPerQuantity, totalCost;

    if (city == "Sofia")
    {
        if (product == "coffee")
        {
            costPerQuantity = 0.5;
        }

        else if (product == "water")
        {
            costPerQuantity = 0.8;
        }

        else if (product == "bear")
        {
            costPerQuantity = 1.2;
        }

        else if (product == "sweets")
        {
            costPerQuantity = 1.45;
        }

        else if (product == "peanuts")
        {
            costPerQuantity = 1.6;
        }
    }

    else if (city == "Plovdiv")
    {
        if (product == "coffee")
        {
            costPerQuantity = 0.4;
        }

        else if (product == "water")
        {
            costPerQuantity = 0.7;
        }

        else if (product == "bear")
        {
            costPerQuantity = 1.15;
        }

        else if (product == "sweets")
        {
            costPerQuantity = 1.3;
        }
    
        else if (product == "peanuts")
        {
            costPerQuantity = 1.5;
        }
    }

    else if (city == "Varna")
    {
        if (product == "coffee")
        {
            costPerQuantity = 0.45;
        }

        else if (product == "water")
        {
            costPerQuantity = 0.7;
        }

        else if (product == "bear")
        {
            costPerQuantity = 1.1;
        }

        else if (product == "sweets")
        {
            costPerQuantity = 1.35;
        }

        else if (product == "peanuts")
        {
            costPerQuantity = 1.55;
        }
    }

    totalCost = costPerQuantity * quantity;
    return totalCost;

}