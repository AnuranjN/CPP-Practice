#include<iostream>

int main(){
    int factorial;
    std::cin>>factorial;
    for(int i=factorial-1;i>0;i--){
        factorial=factorial*i;
        
    }
    std::cout<<factorial<<std::endl;
    return 0;

}
