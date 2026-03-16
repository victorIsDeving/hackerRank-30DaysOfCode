#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Solution {
    private:
    std::queue<char> queue;
    std::stack<char> stack;
    
    public:
    void enqueueCharacter(char c)
    {
        this->queue.push(c);
    }
    char dequeueCharacter()
    {
        if (this->queue.size() == 0)
        {
            throw std::length_error("queue.size() is zero");
        }
        char c = this->queue.front();
        this->queue.pop();
        
        return c;
    }
    
    void pushCharacter(char c)
    {
        this->stack.push(c);
    }
    char popCharacter()
    {
        if (this->stack.size() == 0)
        {
            throw std::length_error("stack.size() is zero");
        }
        char c = this->stack.top();
        this->stack.pop();
        
        return c;
    }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
      // create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome." << std::endl;
    } else {
        cout << "The word, " << s << ", is not a palindrome." << std::endl;
    }
    
    return 0;
}
