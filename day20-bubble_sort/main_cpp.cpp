#include <iostream>


std::string ltrim(const std::string &);
std::string rtrim(const std::string &);
std::vector<std::string> split(const std::string &);


int main()
{
    std::string n_temp;
    getline(std::cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    std::string a_temp_temp;
    getline(std::cin, a_temp_temp);

    std::vector<std::string> a_temp = split(rtrim(a_temp_temp));

    std::vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }
    
    int swap_count {1};
    int swap_total {};
    while (swap_count != 0)
    {
        swap_count = 0;
        for (int i{0}; i < n-1; i++)
        {
            if (a[i] > a[i+1])
            {
                std::swap(a[i],a[i+1]);
                swap_count++;
            }
        }
        swap_total = swap_total + swap_count;
    }
    
    std::cout << "Array is sorted in " << swap_total << " swaps." << std::endl;
    std::cout << "First Element: " << a.front() << std::endl;
    std::cout << "Last Element: " << a.back() << std::endl;

    return 0;
}

std::string ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
} 

std::string rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

std::vector<std::string> split(const std::string &str) {
    std::vector<std::string> tokens;

    std::string::size_type start = 0;
    std::string::size_type end = 0;

    while ((end = str.find(" ", start)) != std::string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
