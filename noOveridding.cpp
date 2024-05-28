#include <iostream>
using namespace std;

class baseClass {
    public :
    virtual void perkenalan() final {
    
        cout << "hello saya Function dari base class";
    }
};

class derivedClass : public baseClass {
    public: 
    void perkenalan() 
    {
        cout << "hello saya function dari derived class";
    }
};

int main() {
    derivedClass a;
    a.perkenalan();
    return 0;
}