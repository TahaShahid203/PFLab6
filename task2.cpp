#include <iostream>
using namespace std;

float Discount(string, string, int);

main()
{
    string day, month;
    int price;
    cout << "Enter Day: ";
    cin >> day;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter price: ";
    cin >> price;

    float discountedPrice = Discount(month, day, price);

    cout << "Your discounted price: " << discountedPrice << endl;
}



float Discount (string month, string day, int amount)
{
    float discountedPrice = amount;
    if (day == "Sunday" && (month == "October" || month == "March" || month == "August"))
    {
        
        discountedPrice = 0.9*amount;
        
    }
    else if (day == "Monday" && (month == "November" || month == "December"))
    {
        discountedPrice = 0.95*amount;
    }

    return discountedPrice;
    
}