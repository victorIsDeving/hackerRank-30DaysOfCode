#include <iostream>
#include <string>


int main() {
    std::string phrase {};
    
    std::getline(std::cin >> std::ws, phrase);
    
    std::cout << "Hello, World." << std::endl;
    std::cout << phrase << std::endl;

    return 0;
}
