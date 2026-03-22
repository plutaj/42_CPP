#include "MutantStack.hpp"

int main() {

    MutantStack<int> ms;
    ms.push(10);
    ms.push(20);
    ms.push(30);
    std::cout << "Top is: " << ms.top() << " Amount of member is: " << ms.size() << std::endl;
    
    MutantStack<int>::iterator it = ms.begin();

    while (it != ms.end()) {
        std::cout << *it << std::endl;
        it++;
    }

    return 0;
}