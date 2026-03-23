#include <iostream>
#include <cmath>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T {};
    std::cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        int n {};
        std::cin >> n;
        int root = pow(n,0.5)+1;
        bool prime = true;
        for (int j = 2; j < root; j++)
        {
            if (n % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime && n!=1)
        {
            std::cout << "Prime" << std::endl;
        }
        else
        {
            std::cout << "Not prime" << std::endl;
        }
    }
    
    return 0;
}
