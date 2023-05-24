#include <iostream>

int main(){
    int N;
    float q;
    float y;
    float total = 0.0;
    
    std::cin >> N;
    
    for (int i = 0; i < N; i++){
        std::cin >> q;
        std::cin >> y;
        total += q*y;
    }
    
    std::cout << total;
}
