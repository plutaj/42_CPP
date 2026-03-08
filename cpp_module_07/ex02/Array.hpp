#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {

    private:
        T* _data;
        unsigned int _size;

    public:
        Array() : _data(NULL), _size(0) {};
        Array(unsigned int n) {
            _data = new T[n]();
        }
        Array(const Array& obj) {
            obj._data(this->_data);
            obj._size(this->_size);
        }
        Array& operator=(const Array& obj) {
            if (*this != obj) {
                this->_data = obj._data;
                this->_size = obj._size;
            }
            return (*this);
        }
        ~Array() {
            delete[] _data;
        }

        unsigned int size() {
            return _size;
        }
};

#endif