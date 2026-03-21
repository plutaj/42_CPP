#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

class EndReachedException : public std::exception {

    public:
        virtual const char *what() const throw() {
            return ("Vector not found");
        }
};

template <typename T>
typename T::iterator easyfind(T& container, int value) {

    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw EndReachedException();
    return it;
}

#endif