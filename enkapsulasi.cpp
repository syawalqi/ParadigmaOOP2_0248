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

int main() {
    remoteLampu lampuRumah;

    lampuRumah.setSaklarlampu(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarlampu(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklarlampu(2, "Lampu Teras Tidur");
    lampuRumah.setSaklarlampu(3, "Lampu Dapur");

    cout << lampuRumah.getSaklarNo(0) << endl;
    cout << lampuRumah.getSaklarNo(1) << endl;
    cout << lampuRumah.getSaklarNo(2) << endl;
    cout << lampuRumah.getSaklarNo(3) << endl;
    return 0;

}