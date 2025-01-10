#include <iostream>

int main(){
    std::string name;
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name);

    if (name.length() > 12){
        std::cout << "Your name can't be longer than 12 characters\n";
    }
    else {
        std::cout << "Hello " << name << '\n';
    }

    if (name.empty()){
        std::cout << "You didn't enter a name\n";
    }
    else {
        std::cout << "Hello " << name << '\n';
    }

    name.clear();
    std::cout << "Hello " << name << '\n';

    name = "Szymon";

    name.append("@gmail.com");
    std::cout << "Your email is: " << name << '\n';
    std::cout << name.at(0) << std::endl;

    name.insert(0, "Mr. ");
    std::cout << "Hello " << name << '\n';

    std::cout << name.find("gmail") << '\n';

    name.erase(0, 4);
    std::cout << "Hello " << name << '\n';

    
}