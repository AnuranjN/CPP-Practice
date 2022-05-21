#include <iostream>
using std::cout;
using std::cin;

int main(){                                  
    int n,r,rev=0;                                //Declaring the variables
    cin>>n;
    int m=n;
    while(n>0){                             
        r=n%10;
        n=n/10;
        rev=rev*10+r;
        
    }
    cout<<rev<<std::endl;;
    if(rev==m){                                  
        cout<<"Its a palindrome"<<std::endl;
    }
    else{
        cout<<"Not a palindrome"<<std::endl;
    }
    return 0;
}    
