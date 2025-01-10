#include <iostream>

int searchArray(int numbers[], int size, int element);

int main(){

    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter a number: ";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index == -1){
        std::cout << "The number " << myNum << " is not in the array\n";
    } else {
        std::cout << "The number " << myNum << " is at index " << index << '\n';
    }

    return 0;
}

int searchArray(int numbers[], int size, int element){
    for (int i = 0; i < size; i++){
        if (numbers[i] == element){
            return i;
        }
    }
    return -1;
}