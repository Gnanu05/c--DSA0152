#include <iostream>

int main() {
    int arr[3] = {1, 2, 3};
    int* ptr = arr; // pointer to the first element of the array

    std::cout << "Displaying address using arrays:" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "&arr[" << i << "] = " << (void*)&arr[i] << std::endl;
    }

    std::cout << "Displaying address using pointers:" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "ptr + " << i << " = " << (void*)(ptr + i) << std::endl;
    }

    return 0;
}
