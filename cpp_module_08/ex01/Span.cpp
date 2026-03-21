#include "Span.hpp"
#include <iostream>

Span::Span(unsigned int _n) : _n(_n) {}

Span::Span(const Span& obj) {
    this->_n = obj._n;
}

Span& Span::operator=(const Span& obj) {
    if (this != &obj) {
        this->_n = obj._n;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int num) {
    if (_v.size() >= _n)
        throw MaximumIteratorsReached();
    _v.push_back(num);
}

int Span::longestSpan() {
    if (_v.size() < 2)
       throw NotEnoughIterators(); 
    int max = *std::max_element(_v.begin(), _v.end());
    int min = *std::min_element(_v.begin(), _v.end());
    return (max - min);
}

int Span::shortestSpan() {
    if (_v.size() < 2)
       throw NotEnoughIterators(); 
    std::vector<int> temp = _v;
    int minSpan = std::numeric_limits<int>::max();

    std::sort(temp.begin(), temp.end());
    for (int i = 0; i < ((int)temp.size() - 2); i++) {
        int diff = temp[i+1] - temp[i];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

void Span::printContainer() {
    int index = 0;
    for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); ++it, index++) {
        if (!(index % 10))
            std::cout << std::endl;
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}