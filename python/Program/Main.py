from Laptop import Laptop
from Desktop import Desktop


dataLaptop = []
dataDesktop = []


print("--- Welkam to EnterKompuDoom ---")


while True:

    print()
    print("========== MENU ==========")
    print("1. Tambah Laptop")
    print("2. Tambah PC Desktop")
    print("3. Tampilkan Data")
    print("4. Keluar")
    print("===========================")

    pilihan = input("Pilih Menu : ")

    if pilihan == "1":

        print()
        print("Tambah List Laptop")

        jumlahLaptop = int(input("Jumlah Laptop : "))

        for i in range(jumlahLaptop):

            merek = input("Merek         : ")
            model = input("Model         : ")
            layar = input("Layar         : ")
            baterai = input("Baterai       : ")

            laptop = Laptop(merek, model, layar, baterai)

            print()
            print("Detail RAM")

            kapasitas = input("Kapasitas     : ")
            tipe = input("Tipe          : ")

            laptop.getRam().setKapasitas(kapasitas)
            laptop.getRam().setTipe(tipe)

            print()
            print("Detail CPU")

            merekCpu = input("Merek         : ")
            modelCpu = input("Model         : ")
            kecepatan = input("Kecepatan     : ")

            laptop.getCpu().setMerek(merekCpu)
            laptop.getCpu().setModel(modelCpu)
            laptop.getCpu().setKecepatan(kecepatan)

            print()
            print("Detail GPU")

            merekGpu = input("Merek         : ")
            modelGpu = input("Model         : ")
            vram = input("VRAM          : ")

            laptop.getGpu().setMerek(merekGpu)
            laptop.getGpu().setModel(modelGpu)
            laptop.getGpu().setVram(vram)

            print()
            print("Detail Storage")

            kapasitasStorage = input("Kapasitas     : ")
            tipeStorage = input("Tipe          : ")

            laptop.getStorage().setKapasitas(kapasitasStorage)
            laptop.getStorage().setTipe(tipeStorage)

            dataLaptop.append(laptop)

        print()
        print("Data Laptop berhasil ditambahkan!")


    elif pilihan == "2":

        print()
        print("Tambah List PC Desktop")

        jumlahDesktop = int(input("Jumlah PC Desktop : "))

        for i in range(jumlahDesktop):

            casing = input("Casing        : ")
            psu = input("PSU           : ")

            desktop = Desktop("", "", casing, psu)

            print()
            print("Detail RAM")

            kapasitas = input("Kapasitas     : ")
            tipe = input("Tipe          : ")

            desktop.getRam().setKapasitas(kapasitas)
            desktop.getRam().setTipe(tipe)

            print()
            print("Detail CPU")

            merekCpu = input("Merek         : ")
            modelCpu = input("Model         : ")
            kecepatan = input("Kecepatan     : ")

            desktop.getCpu().setMerek(merekCpu)
            desktop.getCpu().setModel(modelCpu)
            desktop.getCpu().setKecepatan(kecepatan)

            print()
            print("Detail GPU")

            merekGpu = input("Merek         : ")
            modelGpu = input("Model         : ")
            vram = input("VRAM          : ")

            desktop.getGpu().setMerek(merekGpu)
            desktop.getGpu().setModel(modelGpu)
            desktop.getGpu().setVram(vram)

            print()
            print("Detail Storage")

            kapasitasStorage = input("Kapasitas     : ")
            tipeStorage = input("Tipe          : ")

            desktop.getStorage().setKapasitas(kapasitasStorage)
            desktop.getStorage().setTipe(tipeStorage)

            dataDesktop.append(desktop)

        print()
        print("Data PC Desktop berhasil ditambahkan!")


    elif pilihan == "3":

        while True:

            print()
            print("========== PILIH OPSI ==========")
            print("1. Tampilkan Laptop")
            print("2. Tampilkan PC Desktop")
            print("3. Kembali")
            print("===============================")

            pilihanData = input("Pilih OPSI : ")


            if pilihanData == "1":

                print()
                print("========== LIST LAPTOP ==========")

                if len(dataLaptop) == 0:

                    print("Belum ada data Laptop.")

                else:

                    for laptop in dataLaptop:

                        print()
                        print("Merek       :", laptop.getMerek())
                        print("Model       :", laptop.getModel())
                        print("Layar       :", laptop.getLayar())
                        print("Baterai     :", laptop.getBaterai())

                        print("RAM         :", laptop.getRam().getKapasitas(), laptop.getRam().getTipe())

                        print("CPU         :", laptop.getCpu().getMerek(), laptop.getCpu().getModel(), laptop.getCpu().getKecepatan())

                        print("GPU         :", laptop.getGpu().getMerek(), laptop.getGpu().getModel(), laptop.getGpu().getVram())

                        print("Storage     :", laptop.getStorage().getKapasitas(), laptop.getStorage().getTipe())

                        print("----------------------------------------")


            elif pilihanData == "2":

                print()
                print("========== LIST PC DESKTOP ==========")

                if len(dataDesktop) == 0:

                    print("Belum ada data PC Desktop.")

                else:

                    for desktop in dataDesktop:

                        print()
                        print("Casing      :", desktop.getCasing())
                        print("PSU         :", desktop.getPsu())

                        print("RAM         :", desktop.getRam().getKapasitas(), desktop.getRam().getTipe())

                        print("CPU         :", desktop.getCpu().getMerek(), desktop.getCpu().getModel(), desktop.getCpu().getKecepatan())

                        print("GPU         :", desktop.getGpu().getMerek(), desktop.getGpu().getModel(), desktop.getGpu().getVram())

                        print("Storage     :", desktop.getStorage().getKapasitas(), desktop.getStorage().getTipe())

                        print("----------------------------------------")


            elif pilihanData == "3":

                break


            else:

                print()
                print("Pilihan tidak tersedia!")

    elif pilihan == "4":

        print()
        print("Anda Telah Keluar <3")
        break


    else:

        print()
        print("Pilihan tidak tersedia!")