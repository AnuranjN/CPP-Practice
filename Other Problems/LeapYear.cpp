//Program to find wether a year is a leap year

#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int year;                       //Declaring variable year
 
    cout << "Enter a year: ";
    cin >> year;
 
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
             cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";
 
    return 0;
}
