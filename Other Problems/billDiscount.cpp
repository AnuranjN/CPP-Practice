//Program to calculate discounted bill amount

#include <iostream>
using std::cout;
using std::cin;

int main(){
    int bill_amount;                                                        //Declaring variables bill_amount and discount
    float discount;
    cout<<"Enter bill amount";                                              //Taking input from user            
    cin>>bill_amount;
    
    if(bill_amount>=500){
        discount=bill_amount*20/100;                                        //Using conditional statements
    }
    else if(bill_amount>=100 && bill_amount<500){
        discount=bill_amount*10/100;
    }
     
    cout<<"Bill amount is: "<<bill_amount<<std::endl;                       //Printing the output 
    cout<<"Discount amount is: "<<discount<<std::endl;
    cout<<"Discounted amount is: "<<bill_amount-discount<<std::endl;
    
    return 0;

}
