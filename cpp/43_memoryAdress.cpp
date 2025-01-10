#include <iostream>

int main(){
    // Memory adress = a location in memory where data is stored
    // The & operator is used to get the memory adress of a variable

    std::string name = "Szymon";
    int age = 21;
    bool student = true;
    double price = 10.99;

    std::cout << "The memory adress of name ("<< name <<")\t is: \t" << &name << '\n';
    std::cout << "The memory adress of age ("<< age <<")\t\t is: \t" << &age << '\n';
    std::cout << "The memory adress of student ("<< student <<")\t is: \t" << &student << '\n';
    std::cout << "The memory adress of price ("<< price <<")\t is: \t" << &price << '\n';


    return 0;
}