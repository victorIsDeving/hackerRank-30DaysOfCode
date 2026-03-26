#include <iostream>
#include <regex>


std::string ltrim(const std::string &);
std::string rtrim(const std::string &);
std::vector<std::string> split(const std::string &);
bool check_email(std::string email, std::string domain);


int main()
{
    std::string N_temp;
    std::getline(std::cin, N_temp);

    int N = std::stoi(ltrim(rtrim(N_temp)));

    std::vector<std::string> names {};
    for (int N_itr = 0; N_itr < N; N_itr++) {
        std::string first_multiple_input_temp;
        getline(std::cin, first_multiple_input_temp);

        std::vector<std::string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        std::string firstName = first_multiple_input[0];

        std::string emailID = first_multiple_input[1];
        
        if (check_email(emailID, "@gmail.com"))
        {
            names.push_back(firstName);
        }
    }
    
    std::sort(names.begin(),names.end());
    for (std::string n : names)
    {
        std::cout << n << std::endl;
    }

    return 0;
}

bool check_email(std::string email, std::string domain)
{
    std::regex pat(domain + "$");
    
    return std::regex_search(email,pat);
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
