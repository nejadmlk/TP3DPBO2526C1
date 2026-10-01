#pragma once

#include <iostream>
#include <string>

using namespace std;

class GPU{

private:

    string merek;
    string model;
    string vram;

public:

    GPU(string merek = "", string model = "", string vram = ""){
        this->merek = merek;
        this->model = model;
        this->vram = vram;
    }

    string getMerek(){
        return merek;
    }

    string getModel(){
        return model;
    }

    string getVram(){
        return vram;
    }

    void setMerek(string merek){
        this->merek = merek;
    }

    void setModel(string model){
        this->model = model;
    }

    void setVram(string vram){
        this->vram = vram;
    }
};