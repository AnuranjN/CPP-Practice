//Program to print area of a circle

#include <iostream>
#include <cmath>

int main(){
    float area, radius;                         //Declaring variables area and radius
    std::cout<<"Enter radius of circle";
    std::cin>>radius;                           //Take input of radius from user
    
    area=3.14*(pow(radius,2));                  //Formula for radius of circle  
    
    std::cout<<"Area of circle is:"<<area<<std::endl;         //printing area of circle
    
}
