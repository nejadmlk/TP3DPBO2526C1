#include <iostream>
#include <string>

#include "Komputer.cpp"

using namespace std;

class Desktop : public Komputer{

private:

    string casing;
    string psu;

public:

    Desktop(string merek = "", string model = "", string casing = "", string psu = "") : Komputer(merek, model){
        this->casing = casing;
        this->psu = psu;
    }

    string getCasing(){
        return casing;
    }

    string getPsu(){
        return psu;
    }

    void setCasing(string casing){
        this->casing = casing;
    }

    void setPsu(string psu){
        this->psu = psu;
    }
};