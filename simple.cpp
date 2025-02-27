#include <iostream>
using namespace std;

class Base {
private:
    int a = 10; 
public:
    int b = 20;
protected:
    int c = 30;
};

class Derived : private Base {
public:
    void Display() 
    {
        //cout << "a = " << a << endl;  
        cout << "b = " << b << endl; 
        cout << "c = " << c << endl;  
    }
};

int main() {
    Derived d;
    d.Display(); 
    return 0;
}

