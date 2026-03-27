#include <iostream>
#include <string>
#include <fstream>


std::string ltrim(const std::string &);
std::string rtrim(const std::string &);
std::vector<std::string> split(const std::string &);

/*
 * Complete the 'bitwiseAnd' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER N
 *  2. INTEGER K
 */

int bitwiseAnd(int N, int K) {
    int max_val = 0;
    
    for (int i = 0; i <= N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            int val = i & j;
            if (val > max_val && val < K)
            {
                max_val = val;
            }
        }
    }
    
    return max_val;
}

int main()
{

    std::string t_temp;
    std::getline(std::cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        std::string first_multiple_input_temp;
        std::getline(std::cin, first_multiple_input_temp);

        std::vector<std::string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int count = stoi(first_multiple_input[0]);

        int lim = stoi(first_multiple_input[1]);

        int res = bitwiseAnd(count, lim);

        std::cout << res << std::endl;
    }

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
