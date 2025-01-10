#include <iostream>

int main(){

    std::string students[] = {"McQueen", "Mater", "Sally", "Doc", "Ramone"};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++){
        std::cout << students[i] << '\n';
    }

    std::cout << "\n\n";

    char grade[] = {'A', 'B', 'C', 'D', 'F'};
    for (int i = 0; i < sizeof(grade) / sizeof(char); i++){
        std::cout << grade[i] << '\n';
    }

    return 0;
}