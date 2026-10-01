# Janji
Saya Nezhad Ahmad Maliki dengan NIM 2503880 mengerjakan Tugas Praktikum 2 pada Mata Kuliah Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# Struktur File

```
├───cpp
│   ├───Dokumentasi
│   │       Input Laptop.png
│   │       Input PC.png
│   │       List laptop.png
│   │       List PC.png
│   │       Opsi Tampilan Data.png
│   │       Tampilan keluar program.png
│   │       Tampilan Utama.png
│   │
│   └───Program
│           CPU.cpp
│           Dekstop.cpp
│           GPU.cpp
│           Komputer.cpp
│           Laptop.cpp
│           Main.cpp
│           RAM.cpp
│           Storage.cpp
│
├───java
│   ├───Dokumantasi
│   │       Input Laptop.png
│   │       Input PC.png
│   │       List laptop.png
│   │       List PC.png
│   │       Opsi Tampilan Data.png
│   │       Tampilan keluar program.png
│   │       Tampilan Utama.png
│   │
│   └───Program
│           CPU.java
│           Dekstop.java
│           GPU.java
│           Komputer.java
│           Laptop.java
│           Main.java
│           RAM.java
│           Storage.java
│
└───python
    ├───Dokumantasi
    │       Input Laptop.png
    │       Input PC.png
    │       List laptop.png
    │       List PC.png
    │       Opsi Tampilan Data.png
    │       Tampilan keluar program.png
    │       Tampilan Utama.png
    │
    └───Program
            CPU.py
            Desktop.py
            GPU.py
            Komputer.py
            Laptop.py
            Main.py
            RAM.py
            Storage.py
```

# Desain & Alur Program

<img src="Design Diagram.png" width="100%">

## Karena program ini bertemakan tentang sebuah toko barang elektronik berupa pc dan laptop maka dibutuhkan class yag berhubungan dengan komponen dari komputer itu sendiri
### 1. Desain Class `CPU`
Semua atribut yang ada di class dibikin private. Jadi kalau mau ngambil atau ngubah nilainya, harus lewat method getter dan setter:
- `merek` (string): 
- `model` (string): 
- `kecepatan` (string): 

### 2. Desain Class `GPU`
Karena emua atribut yang ada di class dibikin private. Jadi kalau mau ngambil atau ngubah nilainya, harus lewat method getter dan setter:
- `merek` (string): 
- `model` (string): 
- `VRAM` (string): 

### 3. Desain Class `RAM`
Semua atribut yang ada di class dibikin private. Jadi kalau mau ngambil atau ngubah nilainya, harus lewat method getter dan setter:
- `kapasitas` (string): 
- `tipe` (string):

### 4. Desain Class `Storage`
Semua atribut yang ada di class dibikin private. Jadi kalau mau ngambil atau ngubah nilainya, harus lewat method getter dan setter:
- `kapasitas` (string): 
- `tipe` (string):

### 5. Desain Class `Laptop`
Semua atribut yang ada di class dibikin private. Jadi kalau mau ngambil atau ngubah nilainya, harus lewat method getter dan setter:
- `layar` (string): 
- `baterai` (string):

### 6. Desain Class `Dekstop`
Semua atribut yang ada di class dibikin private. Jadi kalau mau ngambil atau ngubah nilainya, harus lewat method getter dan setter:
- `casing` (string): 
- `psu` (string):

### 7. Desain Class `Komputer`
Semua atribut yang ada di class dibikin private. Jadi kalau mau ngambil atau ngubah nilainya, harus lewat method getter dan setter:
- `merek` (string): 
- `model` (string):
- `ram` (string): 
- `cpu` (string):
- `gpu` (string): 
- `storage` (string):


### 4. Alur Program (Flow Kode), Alur Design

jadi pada program toko enterkompudoom terdapat dua hubungan relasi antar class. terdapat relasi komposisi dan inherirance.
class yang berelasi komposisi ialah class cpu, gpu, ram, dan storage. mengapa? karena suatu komputer agar komputer itu dapat digunakkan dan berfungsi maka sebuah komputer sangat memerlukan komponen2 tersebut. makannya pada program ini komputer berelasi komposisi dengan komponen-komponennya.

pada atribut komputer, class-class dari komponennya yang berelasi komposisi dilakukkan dengan cara menginstansi saja dengan metode get dan set biasa. namun, apabila tidak ada maka program tidak dapat menginstansi komponen-komponennya dan program jadi tidak berjalan dengan seharusnya.

Alur pada program ini dimulai dengan user yang dapat menginput angka dari 1-4. apabila mengetik selain angka tersebut maka user akan dikeluarkan dari program. untuk opsi 1, user dapat melakukkan input data stok untuk laptop. untuk opsi 2, user dapat melakukkan input data stok pc dekstop. dan untuk input 3, user akan dibawa ke opsi pilihan lagi. user akan disuruh menginput angka 1-3. opsi 1 untuk menampilkan data laptop, opsi 2 untuk menampilkan data pc dekstop, dan opsi 3 untuk kembali ke halaman utama. pada opsi 4, user akan langsung dikeluarkan dari program.

# Dokumentasi

## C++, JAVA, PYTHON

| Tampilkan Utama | Contoh Input | Tampilkan Data Setelah Input |
| :---: | :---: | :---: |
| <img src="cpp/Dokumentasi/Tampilkan Utama.png" width="100%"> | <img src="cpp/Dokumentasi/Tampilkan Utama.png" width="100%"> | <img src="cpp/Dokumentasi/Tampilkan Utama.png" width="100%"> |
