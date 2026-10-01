#include <iostream>
#include <string>
#include <vector>

#include "Laptop.cpp"
#include "Dekstop.cpp"

using namespace std;

int main(){

    vector<Laptop> dataLaptop;
    vector<Desktop> dataDesktop;

    cout << "--- Welkam to EnterKompuDoom ---" << endl;

    while(true){

        cout << endl;
        cout << "========== MENU ==========" << endl;
        cout << "1. Tambah Laptop" << endl;
        cout << "2. Tambah PC Desktop" << endl;
        cout << "3. Tampilkan Data" << endl;
        cout << "4. Keluar" << endl;
        cout << "===========================" << endl;

        string pilihan;
        cout << "Pilih Menu : ";
        cin >> pilihan;

        if(pilihan == "1"){

            cout << endl;
            cout << "Tambah List Laptop" << endl;

            int jumlahLaptop;
            cout << "Jumlah Laptop : ";
            cin >> jumlahLaptop;

            cin.ignore();

            for(int i = 0; i < jumlahLaptop; i++){

                string merek;
                string model;
                string layar;
                string baterai;

                cout << endl;
                cout << "Laptop ke-" << i + 1 << endl;

                cout << "Merek         : ";
                getline(cin, merek);

                cout << "Model         : ";
                getline(cin, model);

                cout << "Layar         : ";
                getline(cin, layar);

                cout << "Baterai       : ";
                getline(cin, baterai);

                Laptop laptop(merek, model, layar, baterai);

                cout << endl;
                cout << "Detail RAM" << endl;

                string kapasitas;
                string tipe;

                cout << "Kapasitas     : ";
                getline(cin, kapasitas);

                cout << "Tipe          : ";
                getline(cin, tipe);

                laptop.getRam().setKapasitas(kapasitas);
                laptop.getRam().setTipe(tipe);

                cout << endl;
                cout << "Detail CPU" << endl;

                string merekCpu;
                string modelCpu;
                string kecepatan;

                cout << "Merek         : ";
                getline(cin, merekCpu);

                cout << "Model         : ";
                getline(cin, modelCpu);

                cout << "Kecepatan     : ";
                getline(cin, kecepatan);

                laptop.getCpu().setMerek(merekCpu);
                laptop.getCpu().setModel(modelCpu);
                laptop.getCpu().setKecepatan(kecepatan);

                cout << endl;
                cout << "Detail GPU" << endl;

                string merekGpu;
                string modelGpu;
                string vram;

                cout << "Merek         : ";
                getline(cin, merekGpu);

                cout << "Model         : ";
                getline(cin, modelGpu);

                cout << "VRAM          : ";
                getline(cin, vram);

                laptop.getGpu().setMerek(merekGpu);
                laptop.getGpu().setModel(modelGpu);
                laptop.getGpu().setVram(vram);

                cout << endl;
                cout << "Detail Storage" << endl;

                string kapasitasStorage;
                string tipeStorage;

                cout << "Kapasitas     : ";
                getline(cin, kapasitasStorage);

                cout << "Tipe          : ";
                getline(cin, tipeStorage);

                laptop.getStorage().setKapasitas(kapasitasStorage);
                laptop.getStorage().setTipe(tipeStorage);

                dataLaptop.push_back(laptop);
            }

            cout << endl;
            cout << "Data Laptop berhasil ditambahkan!" << endl;
        }


        else if(pilihan == "2"){

            cout << endl;
            cout << "Tambah List PC Desktop" << endl;

            int jumlahDesktop;
            cout << "Jumlah PC Desktop : ";
            cin >> jumlahDesktop;

            cin.ignore();

            for(int i = 0; i < jumlahDesktop; i++){

                string merek;
                string model;
                string casing;
                string psu;

                cout << endl;
                cout << "PC Desktop ke-" << i + 1 << endl;

                cout << "Casing        : ";
                getline(cin, casing);

                cout << "PSU           : ";
                getline(cin, psu);

                Desktop desktop(merek, model, casing, psu);

                cout << endl;
                cout << "Detail RAM" << endl;

                string kapasitas;
                string tipe;

                cout << "Kapasitas     : ";
                getline(cin, kapasitas);

                cout << "Tipe          : ";
                getline(cin, tipe);

                desktop.getRam().setKapasitas(kapasitas);
                desktop.getRam().setTipe(tipe);

                cout << endl;
                cout << "Detail CPU" << endl;

                string merekCpu;
                string modelCpu;
                string kecepatan;

                cout << "Merek         : ";
                getline(cin, merekCpu);

                cout << "Model         : ";
                getline(cin, modelCpu);

                cout << "Kecepatan     : ";
                getline(cin, kecepatan);

                desktop.getCpu().setMerek(merekCpu);
                desktop.getCpu().setModel(modelCpu);
                desktop.getCpu().setKecepatan(kecepatan);

                cout << endl;
                cout << "Detail GPU" << endl;

                string merekGpu;
                string modelGpu;
                string vram;

                cout << "Merek         : ";
                getline(cin, merekGpu);

                cout << "Model         : ";
                getline(cin, modelGpu);

                cout << "VRAM          : ";
                getline(cin, vram);

                desktop.getGpu().setMerek(merekGpu);
                desktop.getGpu().setModel(modelGpu);
                desktop.getGpu().setVram(vram);

                cout << endl;
                cout << "Detail Storage" << endl;

                string kapasitasStorage;
                string tipeStorage;

                cout << "Kapasitas     : ";
                getline(cin, kapasitasStorage);

                cout << "Tipe          : ";
                getline(cin, tipeStorage);

                desktop.getStorage().setKapasitas(kapasitasStorage);
                desktop.getStorage().setTipe(tipeStorage);

                dataDesktop.push_back(desktop);
            }

            cout << endl;
            cout << "Data PC Desktop berhasil ditambahkan!" << endl;
        }


        else if(pilihan == "3"){

            while(true){

                cout << endl;
                cout << "========== PILIH OPSI ==========" << endl;
                cout << "1. Tampilkan Laptop" << endl;
                cout << "2. Tampilkan PC Desktop" << endl;
                cout << "3. Kembali" << endl;
                cout << "===============================" << endl;

                string pilihanData;
                cout << "Pilih OPSI : ";
                cin >> pilihanData;


                if(pilihanData == "1"){

                    cout << endl;
                    cout << "========== LIST LAPTOP ==========" << endl;

                    if(dataLaptop.size() == 0){

                        cout << "Belum ada data Laptop." << endl;
                    }

                    else{

                        for(Laptop& laptop : dataLaptop){

                            cout << endl;
                            cout << "Merek       : " << laptop.getMerek() << endl;
                            cout << "Model       : " << laptop.getModel() << endl;
                            cout << "Layar       : " << laptop.getLayar() << endl;
                            cout << "Baterai     : " << laptop.getBaterai() << endl;

                            cout << "RAM         : "
                                << laptop.getRam().getKapasitas() << " "
                                << laptop.getRam().getTipe() << endl;

                            cout << "CPU         : "
                                << laptop.getCpu().getMerek() << " "
                                << laptop.getCpu().getModel() << " "
                                << laptop.getCpu().getKecepatan() << endl;

                            cout << "GPU         : "
                                << laptop.getGpu().getMerek() << " "
                                << laptop.getGpu().getModel() << " "
                                << laptop.getGpu().getVram() << endl;

                            cout << "Storage     : "
                                << laptop.getStorage().getKapasitas() << " "
                                << laptop.getStorage().getTipe() << endl;

                            cout << "----------------------------------------" << endl;
                        }
                    }
                }


                else if(pilihanData == "2"){

                    cout << endl;
                    cout << "========== LIST PC DESKTOP ==========" << endl;

                    if(dataDesktop.size() == 0){

                        cout << "Belum ada data PC Desktop." << endl;
                    }

                    else{

                        for(Desktop& desktop : dataDesktop){

                            cout << endl;
                            cout << "Casing      : " << desktop.getCasing() << endl;
                            cout << "PSU         : " << desktop.getPsu() << endl;

                            cout << "RAM         : "
                                << desktop.getRam().getKapasitas() << " "
                                << desktop.getRam().getTipe() << endl;

                            cout << "CPU         : "
                                << desktop.getCpu().getMerek() << " "
                                << desktop.getCpu().getModel() << " "
                                << desktop.getCpu().getKecepatan() << endl;

                            cout << "GPU         : "
                                << desktop.getGpu().getMerek() << " "
                                << desktop.getGpu().getModel() << " "
                                << desktop.getGpu().getVram() << endl;

                            cout << "Storage     : "
                                << desktop.getStorage().getKapasitas() << " "
                                << desktop.getStorage().getTipe() << endl;

                            cout << "----------------------------------------" << endl;
                        }
                    }
                }


                else if(pilihanData == "3"){

                    break;
                }


                else{

                    cout << endl;
                    cout << "Pilihan tidak tersedia!" << endl;
                }
            }
        }


        else if(pilihan == "4"){

            cout << endl;
            cout << "Anda Telah Keluar <3" << endl;

            break;
        }


        else{

            cout << endl;
            cout << "Pilihan tidak tersedia!" << endl;
        }
    }

    return 0;
}