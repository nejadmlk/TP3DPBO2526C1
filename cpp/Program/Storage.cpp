#pragma once

#include <iostream>
#include <string>

using namespace std;

class Storage{

private:

    string kapasitas;
    string tipe;

public:

    Storage(string kapasitas = "", string tipe = ""){
        this->kapasitas = kapasitas;
        this->tipe = tipe;
    }

    string getKapasitas(){
        return kapasitas;
    }

    string getTipe(){
        return tipe;
    }

    void setKapasitas(string kapasitas){
        this->kapasitas = kapasitas;
    }

    void setTipe(string tipe){
        this->tipe = tipe;
    }
};