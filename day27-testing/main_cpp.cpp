#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <set>

using namespace std;

int minimum_index(vector<int> seq) {
    if (seq.empty()) {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int size = seq.size();
    int min_idx = 0;
    for (int i = 1; i < size; ++i) {
        if (seq[i] < seq[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

class TestDataEmptyArray
{
    public:
    std::vector<int> get_array()
    {
        std::vector<int> vec {};
        
        return vec;
    }
};

class TestDataUniqueValues
{
    public:
    std::vector<int> get_array()
    {
        std::vector<int> vec {1,2,3};

        return vec;
    }
    
    int get_expected_result()
    {
        return 0;
    }
};

class TestDataExactlyTwoDifferentMinimums
{
    public:
    std::vector<int> get_array()
    {
        std::vector<int> vec {3,1,2,1};
        
        return vec;
    }
    
    int get_expected_result()
    {
        return 1;
    }
};


void TestWithEmptyArray() {
    try {
        TestDataEmptyArray* t1 = new TestDataEmptyArray();
        auto seq = t1->get_array();
        auto result = minimum_index(seq);
    } catch (invalid_argument& e) {
        return;
    }
    assert(false);
}

void TestWithUniqueValues() {
    TestDataUniqueValues* t2 = new TestDataUniqueValues();
    auto seq = t2->get_array();
    assert(seq.size() >= 2);

    assert(set<int>(seq.begin(), seq.end()).size() == seq.size());

    auto expected_result = t2->get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

void TestWithExactlyTwoDifferentMinimums() {
    TestDataExactlyTwoDifferentMinimums* t3 = new TestDataExactlyTwoDifferentMinimums();
    auto seq = t3->get_array();
    assert(seq.size() >= 2);

    auto tmp = seq;
    sort(tmp.begin(), tmp.end());
    assert(tmp[0] == tmp[1] and (tmp.size() == 2 or tmp[1] < tmp[2]));

    auto expected_result = t3->get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

int main() {
    TestWithEmptyArray();
    TestWithUniqueValues();
    TestWithExactlyTwoDifferentMinimums();
    cout << "OK" << endl;
    return 0;
}
