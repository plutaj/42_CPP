#include "easyfind.hpp"
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {

    {
        std::vector<int> v;
        v.push_back(2);
        v.push_back(4);
        v.push_back(6);
        
        try {
            std::vector<int>::iterator i = easyfind(v, 6);
            std::cout << "Found vector: " << *i << std::endl;
        } catch (const std::exception &m) {
            std::cout << "Not found: " << m.what() << std::endl;
        }
    }
    {
        std::vector<int> v;
        v.push_back(2);
        v.push_back(4);
        v.push_back(6);
        
        try {
            std::vector<int>::iterator i = easyfind(v, 5);
            std::cout << "Found vector: " << *i << std::endl;
        } catch (const std::exception &m) {
            std::cout << "Not found: " << m.what() << std::endl;
        }
    }
}