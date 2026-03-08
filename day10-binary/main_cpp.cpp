#include <iostream>
#include <string>
#include<bitset>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    std::string binary = std::bitset<32>(n).to_string();
    int seq = 0;
    int max_seq = 0;
    
    for (int i = 0; i < binary.length(); i++)
    {
        if (binary[i] == '1')
        {
           seq++;
        }
        else
        {
            seq = 0;
        }
        if (seq > max_seq)
        {
            max_seq = seq;
        }
    }

    std::cout << max_seq << std::endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
