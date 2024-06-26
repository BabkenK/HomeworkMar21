#include <iostream>

int doubleValue(int num) {
    return num * 2;
}

int* map(const int* arr, size_t size, int (*func)(int)) {
int* result = new int[size]; 
for (size_t i = 0; i < size; ++i) {
result[i] = func(arr[i]);
}
    return result;
}

int main() {
int arr[] = {1, 2, 3, 4};
size_t size = sizeof(arr) / sizeof(arr[0]); 
int* mappedArray = map(arr, size, doubleValue);

for (size_t i = 0; i < size; ++i) {
std::cout << mappedArray[i] << ' ';
}
std::cout << std::endl;
delete[] mappedArray;
    
    return 0;
}


