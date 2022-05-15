//Program to print maximum of three numbers

#include <iostream>

int main(){
    int a,b,c;
    std::cout<<"Enter first number";                    //Take  user input of numbers
    std::cin>>a;
    std::cout<<"Enter second number";
    std::cin>>b;
    std::cout<<"Enter third number";
    std::cin>>c;
    
    if(a>b && a>c){
        std::cout<<a<<" is the greatest"<<std::endl;    //Comparison using conditional statement
    }
    else if(b>c){
         std::cout<<b<<" is the greatest"<<std::endl;
    }
    else{
        std::cout<<c<<" is the greatest"<<std::endl;
    }
}
