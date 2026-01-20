#include <iostream>


int main(){
    std::string name;
    int age;

    std::cout << "your name?:   ";
    std::cin >> name;

    std::cout << "your age: ";
    std::cin >> age;

    std::cout << "hello " << name;
    std::cout << "you are " << age <<" yeas old" <<'\n';


    return 0;
}