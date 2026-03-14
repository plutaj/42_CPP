#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array {

    private:
        T* _data;
        unsigned int _size;

    public:
        Array() : _data(nullptr), _size(0) {};
        Array(unsigned int n) : _size(n) {
            _data = new T[n]();
        }
        Array(const Array& obj) : _size(obj._size) {
            _data = new T[_size];
            for (unsigned int i = 0; i < _size; ++i)
                _data[i] = obj._data[i];
        }
        Array& operator=(const Array& obj) {
            if (this != &obj) {
                delete[] _data;
                _size = obj._size;
                _data = new T[_size];
                for (unsigned int i = 0; i < _size; ++i)
                    _data[i] = obj._data[i];
            }
            return *this;
        }
        T& operator[](unsigned int index) {
            if (index >= _size)
                throw IndexOutOfBounds();
            return _data[index];
        }
        ~Array() {
            delete[] _data;
        }
        unsigned int size() {
            return _size;
        }
        class IndexOutOfBounds : public std::exception {
            public:
                const char* what() const throw() {
                    return "Index out of bounds";
                }
            };
};

#endif