//Program to count number of vowels
#include<iostream>
#include<string.h>


int main(){
    std::string str;              //declaring a string called str
    getline(std::cin,str);        //We use getline function to read multiple words from the string
    
    int vowels=0;                 //declaring a counter called vowels
    
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ||
            str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                vowels ++;
            }

    }
    std::cout<<"Number of vowels is: "<<vowels<<std::endl;
    return 0;
    
}
