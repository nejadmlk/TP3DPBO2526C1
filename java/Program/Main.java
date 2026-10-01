import java.util.ArrayList;
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        ArrayList<Laptop> dataLaptop = new ArrayList<>();
        ArrayList<Desktop> dataDesktop = new ArrayList<>();

        System.out.println("--- Welkam to EnterKompuDoom ---");

        while (true) {

            System.out.println();
            System.out.println("========== MENU ==========");
            System.out.println("1. Tambah Laptop");
            System.out.println("2. Tambah PC Desktop");
            System.out.println("3. Tampilkan Data");
            System.out.println("4. Keluar");
            System.out.println("===========================");

            System.out.print("Pilih Menu : ");
            String pilihan = input.nextLine();

            if (pilihan.equals("1")) {

                System.out.println();
                System.out.println("Tambah List Laptop");

                System.out.print("Jumlah Laptop : ");
                int jumlahLaptop = Integer.parseInt(input.nextLine());

                for (int i = 0; i < jumlahLaptop; i++) {

                    System.out.print("Merek         : ");
                    String merek = input.nextLine();

                    System.out.print("Model         : ");
                    String model = input.nextLine();

                    System.out.print("Layar         : ");
                    String layar = input.nextLine();

                    System.out.print("Baterai       : ");
                    String baterai = input.nextLine();

                    Laptop laptop = new Laptop(merek, model, layar, baterai);

                    System.out.println();
                    System.out.println("Detail RAM");

                    System.out.print("Kapasitas     : ");
                    String kapasitas = input.nextLine();

                    System.out.print("Tipe          : ");
                    String tipe = input.nextLine();

                    laptop.getRam().setKapasitas(kapasitas);
                    laptop.getRam().setTipe(tipe);

                    System.out.println();
                    System.out.println("Detail CPU");

                    System.out.print("Merek         : ");
                    String merekCpu = input.nextLine();

                    System.out.print("Model         : ");
                    String modelCpu = input.nextLine();

                    System.out.print("Kecepatan     : ");
                    String kecepatan = input.nextLine();

                    laptop.getCpu().setMerek(merekCpu);
                    laptop.getCpu().setModel(modelCpu);
                    laptop.getCpu().setKecepatan(kecepatan);

                    System.out.println();
                    System.out.println("Detail GPU");

                    System.out.print("Merek         : ");
                    String merekGpu = input.nextLine();

                    System.out.print("Model         : ");
                    String modelGpu = input.nextLine();

                    System.out.print("VRAM          : ");
                    String vram = input.nextLine();

                    laptop.getGpu().setMerek(merekGpu);
                    laptop.getGpu().setModel(modelGpu);
                    laptop.getGpu().setVram(vram);

                    System.out.println();
                    System.out.println("Detail Storage");

                    System.out.print("Kapasitas     : ");
                    String kapasitasStorage = input.nextLine();

                    System.out.print("Tipe          : ");
                    String tipeStorage = input.nextLine();

                    laptop.getStorage().setKapasitas(kapasitasStorage);
                    laptop.getStorage().setTipe(tipeStorage);

                    dataLaptop.add(laptop);
                }

                System.out.println();
                System.out.println("Data Laptop berhasil ditambahkan!");

            }

            else if (pilihan.equals("2")) {

                System.out.println();
                System.out.println("Tambah List PC Desktop");

                System.out.print("Jumlah PC Desktop : ");
                int jumlahDesktop = Integer.parseInt(input.nextLine());

                for (int i = 0; i < jumlahDesktop; i++) {

                    System.out.print("Casing        : ");
                    String casing = input.nextLine();

                    System.out.print("PSU           : ");
                    String psu = input.nextLine();

                    Desktop desktop = new Desktop("", "", casing, psu);

                    System.out.println();
                    System.out.println("Detail RAM");

                    System.out.print("Kapasitas     : ");
                    String kapasitas = input.nextLine();

                    System.out.print("Tipe          : ");
                    String tipe = input.nextLine();

                    desktop.getRam().setKapasitas(kapasitas);
                    desktop.getRam().setTipe(tipe);

                    System.out.println();
                    System.out.println("Detail CPU");

                    System.out.print("Merek         : ");
                    String merekCpu = input.nextLine();

                    System.out.print("Model         : ");
                    String modelCpu = input.nextLine();

                    System.out.print("Kecepatan     : ");
                    String kecepatan = input.nextLine();

                    desktop.getCpu().setMerek(merekCpu);
                    desktop.getCpu().setModel(modelCpu);
                    desktop.getCpu().setKecepatan(kecepatan);

                    System.out.println();
                    System.out.println("Detail GPU");

                    System.out.print("Merek         : ");
                    String merekGpu = input.nextLine();

                    System.out.print("Model         : ");
                    String modelGpu = input.nextLine();

                    System.out.print("VRAM          : ");
                    String vram = input.nextLine();

                    desktop.getGpu().setMerek(merekGpu);
                    desktop.getGpu().setModel(modelGpu);
                    desktop.getGpu().setVram(vram);

                    System.out.println();
                    System.out.println("Detail Storage");

                    System.out.print("Kapasitas     : ");
                    String kapasitasStorage = input.nextLine();

                    System.out.print("Tipe          : ");
                    String tipeStorage = input.nextLine();

                    desktop.getStorage().setKapasitas(kapasitasStorage);
                    desktop.getStorage().setTipe(tipeStorage);

                    dataDesktop.add(desktop);
                }

                System.out.println();
                System.out.println("Data PC Desktop berhasil ditambahkan!");

            }

            else if (pilihan.equals("3")) {

                while (true) {

                    System.out.println();
                    System.out.println("========== PILIH OPSI ==========");
                    System.out.println("1. Tampilkan Laptop");
                    System.out.println("2. Tampilkan PC Desktop");
                    System.out.println("3. Kembali");
                    System.out.println("===============================");

                    System.out.print("Pilih OPSI : ");
                    String pilihanData = input.nextLine();

                    if (pilihanData.equals("1")) {

                        System.out.println();
                        System.out.println("========== LIST LAPTOP ==========");

                        if (dataLaptop.size() == 0) {

                            System.out.println("Belum ada data Laptop.");

                        }

                        else {

                            for (Laptop laptop : dataLaptop) {

                                System.out.println();
                                System.out.println("Merek       : " + laptop.getMerek());
                                System.out.println("Model       : " + laptop.getModel());
                                System.out.println("Layar       : " + laptop.getLayar());
                                System.out.println("Baterai     : " + laptop.getBaterai());

                                System.out.println("RAM         : "
                                        + laptop.getRam().getKapasitas() + " "
                                        + laptop.getRam().getTipe());

                                System.out.println("CPU         : "
                                        + laptop.getCpu().getMerek() + " "
                                        + laptop.getCpu().getModel() + " "
                                        + laptop.getCpu().getKecepatan());

                                System.out.println("GPU         : "
                                        + laptop.getGpu().getMerek() + " "
                                        + laptop.getGpu().getModel() + " "
                                        + laptop.getGpu().getVram());

                                System.out.println("Storage     : "
                                        + laptop.getStorage().getKapasitas() + " "
                                        + laptop.getStorage().getTipe());

                                System.out.println("----------------------------------------");
                            }
                        }
                    }

                    else if (pilihanData.equals("2")) {

                        System.out.println();
                        System.out.println("========== LIST PC DESKTOP ==========");

                        if (dataDesktop.size() == 0) {

                            System.out.println("Belum ada data PC Desktop.");

                        }

                        else {

                            for (Desktop desktop : dataDesktop) {

                                System.out.println();
                                System.out.println("Casing      : " + desktop.getCasing());
                                System.out.println("PSU         : " + desktop.getPsu());

                                System.out.println("RAM         : "
                                        + desktop.getRam().getKapasitas() + " "
                                        + desktop.getRam().getTipe());

                                System.out.println("CPU         : "
                                        + desktop.getCpu().getMerek() + " "
                                        + desktop.getCpu().getModel() + " "
                                        + desktop.getCpu().getKecepatan());

                                System.out.println("GPU         : "
                                        + desktop.getGpu().getMerek() + " "
                                        + desktop.getGpu().getModel() + " "
                                        + desktop.getGpu().getVram());

                                System.out.println("Storage     : "
                                        + desktop.getStorage().getKapasitas() + " "
                                        + desktop.getStorage().getTipe());

                                System.out.println("----------------------------------------");
                            }
                        }
                    }

                    else if (pilihanData.equals("3")) {

                        break;

                    }

                    else {

                        System.out.println();
                        System.out.println("Pilihan tidak tersedia!");
                    }
                }
            }

            else if (pilihan.equals("4")) {

                System.out.println();
                System.out.println("Anda Telah Keluar <3");
                break;

            }

            else {

                System.out.println();
                System.out.println("Pilihan tidak tersedia!");
            }
        }

        input.close();
    }
}