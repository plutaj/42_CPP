#include "iter.hpp"
#include <iostream>

int main(void) {

    {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        size_t size = (sizeof(arr) / sizeof(arr[0]));

        std::cout << "Original array." << std::endl;
        iter(arr, size, printer);
        std::cout << std::endl;
        std::cout << std::endl;

        std::cout << "After iter function tempalte." << std::endl;
        iter(arr, size, add);
        iter(arr, size, printer);
        std::cout << std::endl;
    }
    {
        std::cout << std::endl;
        std::cout << std::endl;
    }
    {
        std::string arr[] = {"Hello", "42", "School"};
        iter(arr, 3, printer);
        std::cout << std::endl;

        iter(arr, 3, shout);
        iter(arr, 3, printer);
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    return 0;
}