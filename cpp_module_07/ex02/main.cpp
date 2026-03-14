#include "Array.hpp"
#include <iostream>

template <typename T>
void printer(Array<T>& name) {
    for (unsigned int i = 0; i < name.size(); i++) {
        std::cout << name[i] << std::endl;
    }
}

int main(void) {
{
    std::cout << "\nString array test" << std::endl;

    Array<std::string> arr(3);
    arr[0] = "This";
    arr[1] = "is";
    arr[2] = "test";
    printer(arr);
}
{
    std::cout << "\nInt array test" << std::endl;

    Array<int> arr(4);
    arr[0] = 9;
    arr[1] = 2;
    arr[2] = 5;
    arr[3] = 1;
    printer(arr);
}
{
    std::cout << "\nEmpty array test" << std::endl;

    Array<std::string> arr;

    try {
        std::cout << arr[0] << std::endl;
    }
    catch (const Array<std::string>::IndexOutOfBounds& e) {
            std::cout << e.what() << std::endl;
    }
}
    return 0;
}
