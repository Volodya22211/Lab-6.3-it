#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>
using namespace std;


void printArray(int* array, int size);
void generateArray(int* arr, int size, int min, int max);
int FindBiggestElement(const int* arr, int size, int BiggestNum);

template <typename T>
void printArray1(T* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << array[i] << " ";
    }
    cout << endl;
}

template <typename T>
void generateArray1(T* arr, int size, int min, int max) {
    srand(unsigned(time(NULL)));
    for (int i = 0; i < size; i++)
    {
        arr[i] = min + rand() % (max - min + 1);
    }
}

template <typename T>
T FindBiggestElement1(const T* arr, int size, T BiggestNum) {

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] > BiggestNum) {
            BiggestNum = arr[i];
        }
    }

    return BiggestNum;
}


int main() {
    const int arrSize = 10;
    int a[arrSize];
    
    generateArray(a, arrSize, -100, 100);

    cout << "Array Elements: ";
    printArray(a, arrSize);
    
    int biggestNumber = FindBiggestElement(a, arrSize, INT_MIN);
    cout << "Biggest Number in Array which divides 2: " << biggestNumber << endl;
   
    const int arrSize1 = 10;
    int b[arrSize1];

    generateArray1(b, arrSize1, -100, 100);
    cout << "Array Elements: ";
    printArray1(b, arrSize1);

    int biggestNumber1 = FindBiggestElement1(b, arrSize1, INT_MIN);
    cout << "Biggest Number in Array which divides 2: " << biggestNumber1;
    return 0;
}

void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << array[i] << " ";
    }
    cout << endl;
}

void generateArray(int* arr, int size, int min, int max) {
    srand(unsigned(time(NULL)));
    for (int i = 0; i < size; i++)
    {
        arr[i] = min + rand() % (max - min + 1);
    }
}

int FindBiggestElement(const int* arr, int size, int BiggestNum) {

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] > BiggestNum) {
            BiggestNum = arr[i];
        }
    }

    return BiggestNum;
}