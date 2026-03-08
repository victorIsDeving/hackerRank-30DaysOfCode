#include <utility>
#include <iostream>
#include <map>
using namespace std;


int main() {
    int n {};
    std::cin >> n;
    
    std::map<std::string, int> phonebook {};

    for (int i = 0; i < n; i++)
    {
        std::string name {};
        std::cin >> name;
        std::string phone {};
        std::cin >> phone;
        phonebook.insert({name, stoi(phone)});
    }
    
    std::string line {};
    while(std::cin >> line)
    {
        if (phonebook[line] == 0)
        {
            std::cout << "Not found" << std::endl;
        }
        else
        {
            std::cout << line << "=";
            std::cout << phonebook[line] << std::endl;
        }
    }
    return 0;
}
