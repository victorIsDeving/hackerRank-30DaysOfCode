#include <iostream>
using namespace std;

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        if (initialAge < 0)
        {
            std::cout << "Age is not valid, setting age to 0." << std::endl;
            age = 0;
        }
        else
        {
            age = initialAge;
        }
    }

    void Person::amIOld(){
        std::string response {};
        if (age < 13)
        {
            response = "You are young.";
        }
        else if (age>=13 && age<18)
        {
            response = "You are a teenager.";
        }
        else
        {
            response = "You are old.";
        }

        std::cout << response << std::endl;
    }

    void Person::yearPasses(){
        age++;

    }

int main(){
    int t;
    int age;
    cin >> t;
    for(int i=0; i < t; i++) {
        cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
            p.yearPasses(); 
        }
        p.amIOld();
      
        cout << '\n';
    }

    return 0;
}
