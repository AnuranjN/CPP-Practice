//Program to find wether a year is a leap year

#include <iostream>
using std::cout;
using std::cin;

 
int main(){                                    //Declaring a variable leap_year and taking input from user
    int leap_year;;                       
    cout<<"Enter a year: ";
    cin>>leap_year;

    if(leap_year % 400==0){                    
        cout<<"Its a leap year";
    }
    else if(leap_year % 100==0){
        cout<<"Its a leap year";
    }
    else if(leap_year % 4==0){
        cout<<"Its a leap year";
    }
    else{
        cout<<"Its not a leap year";
    }
    return 0;

}
