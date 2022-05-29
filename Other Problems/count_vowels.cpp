#include<iostream>
#include<string.h>


int main(){
    std::string str;
    getline(std::cin,str);
    
    int vowels=0;
    
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ||
            str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                vowels ++;
            }

    }
    std::cout<<"Number of vowels is: "<<vowels<<std::endl;
    return 0;
    
}
