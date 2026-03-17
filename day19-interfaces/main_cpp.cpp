#include <iostream>


class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int divisors_sum {};
        for (int i = 1; i < n + 1; i++)
        {
            if (n % i == 0)
            {
                divisors_sum = divisors_sum + i;
            }
        }

        return divisors_sum;
    }
};

int main(){
    int n;
    std::cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    std::cout << "I implemented: AdvancedArithmetic\n" << sum << std::endl;
    return 0;
}
