#include <cstdlib>
#include <iostream>

using namespace std;

template <typename T, unsigned int L>
class SimpleArray
{
    T a[L];

public:
    SimpleArray()
    {
        int i;
        for (i = 0; i < L; ++i) {
            a[i] = T();
        }
    }
    T &Get(unsigned int i) { return a[i]; }
    void Set(unsigned int i, T v) { a[i] = v; }
};

int main() {
    SimpleArray<float, 10> arr;
    arr.Set(3, 6.0f);
    cout << arr.Get(3) << endl;
    cout << "The end" << endl;
}