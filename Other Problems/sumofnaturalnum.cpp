#include <iostream>

int main() {
    int n,sum=0;                   //declaring variable  n and taking input from user
    std::cin>>n;
    
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    std::cout<<sum;
    return 0;
}
