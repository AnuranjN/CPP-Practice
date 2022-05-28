//Program to change cases of a letter(UPPER TO LOWER)
#include<iostream>


int main(){                                        //taking string input
    std::string str;
    std::cin>>str;

    for(int i=0; str[i]!='\0';i++){
        str[i]+=32;                               //here 32 is the difference between ASCI values of uppercase and lowercase letters
    }
    std::cout<<str<<std::endl;
}
