
#include <iostream>
#include <string>
using namespace std;


template <typename T>
T findMax(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}


template <typename T>
class Data {
private:
    T value;

public:
    Data(T v) {
        value = v;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    
    cout << "FUNCTION TEMPLATE" << endl;
    cout << "Maximum integer: "
         << findMax(10, 20) << endl;

    cout << "Maximum float: "
         << findMax(5.5, 2.5) << endl;

    
    cout << "\nCLASS TEMPLATE" << endl;

    Data<int> d1(100);
    Data<float> d2(25.5f);
    Data<string> d3("Hello C++");

    cout << "Integer ";
    d1.display();

    cout << "Float ";
    d2.display();

    cout << "String ";
    d3.display();

    return 0;
}
