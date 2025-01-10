#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> PairList;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){

    text_t firstName = "Szymon";
    number_t age = 21;

    std::cout << "Hello " << firstName << '\n'; 

    return 0;
}