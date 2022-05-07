#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin>>n;   //Take user input
    int arr[n];
    
    for(int i=1;i<=n;i++){  //Take input of elements of array
        std::cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        std::cout<<arr[n-i]<<" ";  //Output the array in reverse order
    }    
    return 0;
}
