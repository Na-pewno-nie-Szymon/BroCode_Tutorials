#include <iostream>

int main(){

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy", "Mr. Krabs"};

    for (std::string student : students){
        std::cout << student << '\n';
    }

    std::cout << "\n";

    int grades[] = {100, 90, 80, 70, 60};
    for (int grade : grades){
        std::cout << grade << '\n';
    }

    return 0;
}