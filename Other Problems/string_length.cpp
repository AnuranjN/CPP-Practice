//Program to find length of a string
#include<iostream>

int main(){
    std::string str;
    std::cin>>str;                                       //input string
    
    int count=0;                                         //taking a counter
    for(int i=0;str[i]!='\0';i++){                       //Here we run for loop till it reaches null
        count ++;
    }
    std::cout<<"Length is: "<<count<<std::endl;
    

    return 0;
}
