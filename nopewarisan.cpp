#include <iostream>
using namespace std;

class baseClass final{
    public :
    virtual void perkenalan() {
        cout << "hello saya Function dari base class";
    }
};

class derivedClass : public baseClass {
    public: 
    void perkenalan() {
        cout << "hello saya fucntion dari derived class";
    }
};

int main() {
    derivedClass a;
    a.perkenalan();
    return 0;
}