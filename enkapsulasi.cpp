#include <iostream>
using namespace std;

class remoteLampu{
    private:
    string saklarNo[10];
    public:
    void setSaklarlampu(int i, string value) {
        saklarNo[i] = value;
    }
    string getSaklarNo(int i){
        return saklarNo[i];
    }
};