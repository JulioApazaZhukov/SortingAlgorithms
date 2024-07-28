#include <iostream>

using std::cout;
using std::endl;

void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void swap(int array[], int i){
    int aux = array[i];
    array[i] = array[i+1];
    array[i+1] = aux;
}

void bubbleSort(int array[], int size){
    for (int j = 0; j < size; j++){
        int aux = 0;
        for (int i = 0; i < size; i++){
            if (array[i] > array[i+1]){
                swap(array, i);
            }
        }
    }
    printArray(array, size);
}

int main(){
    int array[]={9, 1, 8, 2, 7, 3, 4, 6, 5};
    int arraySize = sizeof(array)/sizeof(array[0]);

    printArray(array, arraySize);
    bubbleSort(array, arraySize);

    return 0;
}