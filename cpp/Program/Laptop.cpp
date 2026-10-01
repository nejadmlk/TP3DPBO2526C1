#include <iostream>
#include <string>

#include "Komputer.cpp"

using namespace std;

class Laptop : public Komputer{

private:

    string layar;
    string baterai;

public:

    Laptop(string merek = "", string model = "", string layar = "", string baterai = "") : Komputer(merek, model){
        this->layar = layar;
        this->baterai = baterai;
    }

    string getLayar(){
        return layar;
    }

    string getBaterai(){
        return baterai;
    }

    void setLayar(string layar){
        this->layar = layar;
    }

    void setBaterai(string baterai){
        this->baterai = baterai;
    }
};