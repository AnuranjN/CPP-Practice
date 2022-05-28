//Program to find length of a string
#include<iostream>

int main(){
    std::string str;
    std::cin>>str;
    
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count ++;
    }
    std::cout<<"Length is: "<<count<<std::endl;
    

    return 0;
}
