#include<bits/stdc++.h>
int main() {
    
    int a, b;
    std::string characters[10] = {"zero", "one", "two", "three", "four",\
        "five", "six", "seven", "eight", "nine"};
    std::cin >> a >> b;
    for(int i = a; i <= b; i++) {
        
        if(i > 9) {
            if(i % 2 == 0)
                std::cout << "even\n";
            else std::cout << "odd\n";
        }
        else {
            std::cout << characters[i]<<std::endl;
        }
    }
    return 0;
}