#include <iostream>

void bubbleSort(int array[], int size);

int main(){
    // Bubble sort algorithm

    int array[10] = {5, 3, 8, 6, 1, 9, 2, 7, 10, 4}; 
    int size = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, size);

    for(int element : array){
        std::cout << element << ' ';
    }   std::cout << '\n';
    
    return 0;
}

void bubbleSort(int array[], int size){
    int temp;

    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++){
        std::cout << array[i] << ' ';
    }   std::cout << '\n';
}