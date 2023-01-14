#include <iostream>
using namespace std;

float totalIncome(string, int, int);

main()
{
    int rows;
    int columns;
    string type;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> columns;

    cout << "Enter type of ticket: ";
    cin >> type;

    float income = totalIncome(type, rows, columns);

    cout << "The total income for this screening will be " << income << " EUR" << endl;
}


float totalIncome(string type, int rows, int columns)
{
    float income;

    if (type == "Premiere")
    {
        income = rows*columns*12.00;
    }

    if (type == "Normal")
    {
        income = rows*columns*7.50;
    }

    if (type == "Discount")
    {
        income = rows*columns*5.00;
    }
    return income;
}