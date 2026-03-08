#include <iostream>
#include <string>

using namespace std;


int main() {
    int n {};
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::string temp {};
        std::cin >> temp;
        std::string even {};
        std::string odd {};
        for (int j = 0; j < temp.size(); j++)
        {
            if (j % 2 == 0)
            {
                even = even + temp[j];
            }
            else
            {
                odd = odd + temp[j];
            }
        }
        std::cout << even << " " << odd << std::endl;
    }

    return 0;
}
