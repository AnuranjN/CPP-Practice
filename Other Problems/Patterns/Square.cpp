//Program to print Square pattern

#include<iostream>

int main(){
    int n;
    std::cout<<"Enter number";
    std::cin>>n;
    
    for(int i=0; i<n; i++){                          //Here i is row and j is column
        for(int j=0;j<n; j++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
}
