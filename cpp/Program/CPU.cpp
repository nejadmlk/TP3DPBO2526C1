#pragma once

#include <iostream>
#include <string>

using namespace std;

class CPU{

private:

    string merek;
    string model;
    string kecepatan;

public:

    CPU(string merek = "", string model = "", string kecepatan = ""){
        this->merek = merek;
        this->model = model;
        this->kecepatan = kecepatan;
    }

    string getMerek(){
        return merek;
    }

    string getModel(){
        return model;
    }

    string getKecepatan(){
        return kecepatan;
    }

    void setMerek(string merek){
        this->merek = merek;
    }

    void setModel(string model){
        this->model = model;
    }

    void setKecepatan(string kecepatan){
        this->kecepatan = kecepatan;
    }
};