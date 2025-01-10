#include <iostream>

int main(){
    // sizeof() = determines the size in bytes of a:
    //          variable, data type, class, object, etc.

    double price = 10.99;
    std::string name = "Szymon";
    int age = 21;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};


    std::cout << "The size of a double is: " << sizeof(double) << " bytes\n";
    std::cout << "The size of a price is: " << sizeof(price) << " bytes\n";
    std::cout << "See? They are the same!\n";
    std::cout << "**************************************\n";
    std::cout << "The size of a name is: " << sizeof(name) << " bytes\n";
    std::cout << "The size of a age is: " << sizeof(age) << " bytes\n";
    std::cout << "The size of a grade is: " << sizeof(grade) << " bytes\n";
    std::cout << "The size of a student is: " << sizeof(student) << " bytes\n";
    std::cout << "**************************************\n";
    std::cout << "The size of a grades is: " << sizeof(grades) << " bytes\n";
    std::cout << "Thats because size of an array depends on array data type and on amount of items it holds!\n";
    std::cout << "To determine the number of elements in an array, you can use the sizeof() operator and divide it by the size of the data type\n";
    std::cout << "The number of elements in the grades array is: " << sizeof(grades) / sizeof(grades[0]) << "elements\n";

    return 0;
}