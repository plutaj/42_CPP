#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>

class Span {

    private:
        unsigned int _n;
        std::vector<int> _v;

    public:
        Span(unsigned int n);
        Span(const Span& obj);
        Span& operator=(const Span& obj);
        ~Span();

        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
        void printContainer();

        template<typename Iterator>
        void addRange(Iterator begin, Iterator end) {
            if (begin < end) {
                while (begin != end) {
                    addNumber(*begin);
                    ++begin;
                }
            }
        }
        class MaximumIteratorsReached : public std::exception {

            public:
                virtual const char *what() const throw() {
                    return ("You reached maximum of N");
                }
        };
        class NotEnoughIterators : public std::exception {

            public:
                virtual const char *what() const throw() {
                    return ("Required atleast two iterators");
                }
        };
};

#endif