#include <iostream>
using namespace std;

string checkTitle(int age, char gender);

main()

{
    int age;
    char gender;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter gender: ";
    cin >> gender;

    string title = checkTitle(age, gender);

    cout << "Thank you " << title << endl;
}

string checkTitle(int age, char gender)
{
    string title;

    if (gender == 'm')
    {
        if (age >= 16)
        {
            title = "Mr.";
        }
        else
        {
            title = "Master";
        }
    }
    else if(gender == 'f')
    {
        if (age >= 16)
        {
            title = "Ms.";
        }
        else
        {
            title = "Miss";
        }
    }
    return title;
}