#include <iostream>
using namespace std;

int Factorial(int n)
{
    if (n == 2)
    {
        return n;
    }
    
    return Factorial(n-1) * n;
}

int main() {
    int n {};
    cin >> n;
    
    cout << Factorial(n) << endl;
    
    return 0;
}
