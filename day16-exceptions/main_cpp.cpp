#include <iostream>

using namespace std;


int main()
{
    string S;
    getline(cin, S);
    size_t pos {};
    
    // 3465768i9 must return "Bad String", not 3465768
    try
    {
        int i {};
        i = std::stoi(S,&pos);
        if (pos != S.length())
        {
            throw std::invalid_argument("String contains non digit characters");
        }
        std::cout << i << std::endl;
    }
    catch (std::invalid_argument e)
    {
        std::cout << "Bad String" << std::endl;
    }
    
    return 0;
}
