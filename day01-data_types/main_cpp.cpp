#include <iostream>
#include <iomanip>


int main() {
    std::cout << std::fixed << std::setprecision(1);
      
    int i {4};
    float d {4.0};
    std::string s {"HackerRank "};
    
    int j {};
    std::cin >> j;
    float e {};
    std::cin >> e;
    std::string t {};
    std::getline(std::cin >> std::ws, t);

    std::cout << i+j << std::endl;
    std::cout << d+e << std::endl;
    std::cout << s+t << std::endl;

    return 0;
}
