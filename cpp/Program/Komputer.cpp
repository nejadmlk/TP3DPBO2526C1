#pragma once

#include <iostream>
#include <string>

#include "RAM.cpp"
#include "CPU.cpp"
#include "GPU.cpp"
#include "Storage.cpp"

using namespace std;

class Komputer{

private:

    string merek;
    string model;

    RAM ram;
    CPU cpu;
    GPU gpu;
    Storage storage;

public:

    Komputer(string merek = "", string model = ""){
        this->merek = merek;
        this->model = model;
    }

    string getMerek(){
        return merek;
    }

    void setMerek(string merek){
        this->merek = merek;
    }

    string getModel(){
        return model;
    }

    void setModel(string model){
        this->model = model;
    }

    RAM& getRam(){
        return ram;
    }

    CPU& getCpu(){
        return cpu;
    }

    GPU& getGpu(){
        return gpu;
    }

    Storage& getStorage(){
        return storage;
    }
};