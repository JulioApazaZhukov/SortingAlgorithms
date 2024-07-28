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
    array[i] = array[i-1];
    array[i-1] = aux;
}

void insertionSort(int array[], int size){
    int i = 1;
    while (i < size){
        int j = i;
        while (j > 0 && array[j-1] > array[j]){
            swap(array, j);
            j--;
        }
        i++;
    }
    printArray(array, size);
}

int main(){
    int array[]={9, 1, 8, 2, 7, 3, 4, 6, 5};
    int arraySize = sizeof(array)/sizeof(array[0]);

    printArray(array, arraySize);
    insertionSort(array, arraySize);

    return 0;
}