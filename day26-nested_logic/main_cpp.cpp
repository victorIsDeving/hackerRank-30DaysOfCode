#include <iostream>
#include <string>
#include <vector>

std::vector<int> string_to_int_vector (std::string str);
std::vector<int> slice(const std::vector<int>& vec, int start, int end);
void print_vec (std::vector<int> vec);
int fine(std::vector<int> returned, std::vector<int> due);


int main() {
    std::string returned {};
    getline(std::cin, returned);
    
    std::string due {};
    getline(std::cin >> std::ws,due);
    
    std::vector<int> ret_int {}, due_int {};
    ret_int = string_to_int_vector(returned);
    due_int = string_to_int_vector(due);
    
    // print_vec(ret_int);
    // print_vec(due_int);
    
    std::cout << fine(ret_int,due_int) << std::endl;
    
    return 0;
}


int fine(std::vector<int> returned, std::vector<int> due)
{
    int fee {};
    std::vector<int> ret_slice = slice(returned,0,2);
    std::vector<int> due_slice = slice(due,0,2);
    // print_vec(ret_slice);
    // print_vec(due_slice);
    
    if (returned <= due)
    {
        fee = 0;
    }
    else if (ret_slice <= due_slice)
    {
        fee = 15 * (returned[2] - due[2]);
    }
    else if (returned[0] <= due[0])
    {
        fee = 500 * (returned[1] - due[1]);
    }
    else
    {
        fee = 10000;
    }
    
    return fee;
}

std::vector<int> string_to_int_vector (std::string str)
{
    std::vector<int> vec {};
    int start {0}, end {0};
    char delim = ' ';
    
    while ((start = str.find_first_not_of(delim, end)) != (-1)) 
    {
        end = str.find(delim, start);
        int i = std::stoi(str.substr(start, end - start));
        
        vec.insert(vec.begin(),i);
    }
    
    return vec;
}

std::vector<int> slice(const std::vector<int>& vec, int start, int end)
{
    return std::vector<int>(vec.begin() + start, vec.begin() + end);
}

void print_vec (std::vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}
