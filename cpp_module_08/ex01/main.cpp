#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

void subjectTest() {

    std::cout << "### Subject test ###" << std::endl;

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.printContainer();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void largeTest() {

    std::cout << "### Large test (over 10 000 numbers) ###" << std::endl;

    srand(time(0));
    Span sp = Span(12000);

    for (int i = 0; i < 12000; i++) {
        sp.addNumber(rand() % 12000);
    }

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void oneNumTest() {

    std::cout << "### One number test ###" << std::endl;

    Span sp = Span(5);
    sp.addNumber(6);
    sp.printContainer();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void tooManyNumbersTest() {

    std::cout << "### Subject test ###" << std::endl;

    Span sp = Span(2);

    sp.addNumber(1);
    sp.addNumber(2);
    sp.addNumber(3);
}

void rangeInsertTest() {

    std::cout << "### Range insert test ###" << std::endl;

    std::vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);

    Span sp = Span(10);

    sp.addNumber(-2);
    sp.addNumber(-1);
    sp.printContainer();

    sp.addRange(v.begin(), v.end());
    sp.printContainer();
}

int main() {

    try {
        subjectTest();
        // largeTest();
        // oneNumTest();
        // tooManyNumbersTest();
        // rangeInsertTest();

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
