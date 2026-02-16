#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

int main() {

    std::srand(std::time(NULL));

    Base* ptr;
    ptr = generate();

    identify(ptr);
    identify(*ptr);

    delete ptr;
    return 0;
}

Base* generate(void) {

    switch (std::rand() % 3) {
        case 0: {
            std::cout << "generated : A" << std::endl;
            return new A;
        }
        case 1: {
            std::cout << "generated : B" << std::endl;
            return new B;
        }
        case 2: {
            std::cout << "generated : C" << std::endl;
            return new C;
        }
    }
    return NULL;
}

void identify(Base* p) {
    
    if (dynamic_cast<A*>(p))
        std::cout << "Identify - pointer A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Identify - pointer B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Identify - pointer C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base& p) {

    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Identify - reference A" << std::endl;
        return;
    }
    catch (std::exception&) {}

    try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "Identify - reference B" << std::endl;
        return;
    }
    catch (std::exception&) {}

    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "Identify - reference C" << std::endl;
        return;
    }
    catch (std::exception&) {}
}
