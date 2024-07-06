#include <iostream>
using namespace std;

template<class T>
class Vector {
private:
    T *data;
    int m_capacity;
    int m_size;

public:
    Vector(int size) {
        data = new T[size];
        m_capacity = size;
        m_size = 0;
    }

    ~Vector() {
        delete[] data;
    }

    void push_back(const T& dat) {
        if (m_size == m_capacity) {
            m_capacity *= 2;
            T* newData = new T[m_capacity];
            for (int i = 0; i < m_size; ++i) {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
        }
        data[m_size++] = dat;
    }

    int size() const {
        return m_size;
    }

    int capacity() const {
        return m_capacity;
    }
};

int main() {
    Vector<int> V1(20);
    V1.push_back(10);

    cout << "Size: " << V1.size() << endl;
    cout << "Capacity: " << V1.capacity() << endl;

    return 0;
}
