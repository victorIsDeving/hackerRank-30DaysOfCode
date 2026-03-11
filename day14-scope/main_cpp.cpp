#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
    public:
    int maximumDifference;

    // Add your code here
    Difference(vector<int> vec)
    {
        this->elements = vec;
    }
    
    void computeDifference()
    {
        int max_el = *std::max_element(elements.begin(),elements.end());
        int min_el = *std::min_element(elements.begin(),elements.end());
        maximumDifference = std::abs(max_el-min_el);
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference << endl;
    
    return 0;
}
