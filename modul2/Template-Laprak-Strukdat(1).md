# <h1 align="center">Laporan Praktikum Modul 2 Struktur Data</h1>
<p align="center">Daffa Arief Wicaksono - 109082500192</p>

## Dasar Teori

### A. array<br/>
Array adalah tipe data terstruktur yang dapat menyimpan banyak data dengan satu nama yang sama, menempati memori secara berurutan, dan bertipe data sama [1]. Elemen array diakses menggunakan indeks yang dimulai dari 0 untuk elemen pertama [1]. Karena diakses langsung lewat indeks, pengaksesan elemen array memiliki kompleksitas waktu konstan O(1), namun ukuran array bersifat tetap dan harus ditentukan saat deklarasi [1]. Pada kode Guided, array digunakan untuk menyimpan sekumpulan nilai yang kemudian ditampilkan dengan perulangan `for`.

#### 1.Array Satu Dimensi
Array satu dimensi adalah sekumpulan data yang diacu oleh satu identifier dan disusun berurutan dalam satu deret [1]. Bentuk deklarasinya adalah tipe_data nama_array[ukuran];, contohnya int nilai[5];, dan elemennya diakses dengan nilai[0], nilai[1], dan seterusnya.

#### 2. Array Dua Dimensi
Array dua dimensi terdiri dari dua indeks, yaitu baris dan kolom, sehingga dapat dipakai untuk menyimpan data terstruktur dalam bentuk matriks atau tabel [1]. Deklarasinya dilakukan dengan menentukan tipe data, nama array, dan ukuran pada setiap dimensi, misalnya int nilai[3][3];. Array jenis ini dipakai pada program penjumlahan, pengurangan, dan perkalian matriks 3x3 di bagian Unguided.

#### 3. Array Multidimensi
Array multidimensi adalah array dengan dimensi lebih dari dua. Setiap tambahan dimensi menambah satu indeks untuk mengakses elemen, misalnya data[2][3][3] untuk tiga dimensi dan data[2][2][2][2] untuk empat dimensi.

### B. Pointer<br/>
Pointer adalah variabel yang menyimpan atau menunjuk suatu alamat memori, bukan menyimpan nilai data secara langsung [2]. Pointer juga bersifat dinamis, karena dapat digunakan saat dibutuhkan saja dan memorinya dapat dibebaskan setelah tidak dipakai [2]. Hal ini membuat pointer menjadi dasar dari struktur data seperti linked list, yaitu elemen-elemen yang saling terhubung melalui alamat elemen data yang tersimpan di memori [1].

#### 1. Operator Alamat (&) dan Operator Dereference (*)
Operator & digunakan untuk mendapatkan alamat memori suatu variabel, sedangkan operator * digunakan untuk mengakses nilai yang berada pada alamat yang disimpan pointer. Pada kode Guided, px = &x;membuat pointer px menyimpan alamat x, dan *px menghasilkan nilai x yaitu 87.

#### 2. Pointer, Array, dan String
Nama array merepresentasikan alamat elemen pertamanya, sehingga pointer dapat dipakai untuk mengakses elemen array. String pada C++ dapat disimpan sebagai array karakter yang diakhiri karakter null (\0), seperti char nama[] = "strukdat";`.

#### 3. Pass by Pointer dan Pass by Reference
Parameter fungsi dapat dikirim melalui pointer (int *x) atau reference (int &x) sehingga perubahan nilai di dalam fungsi ikut mengubah variabel aslinya. Pointer bekerja dengan alamat memori yang harus di-dereference dengan *, sedangkan reference adalah nama alias dari variabel yang sudah ada sehingga bisa dipakai langsung. Konsep ini dipakai pada Unguided 2 untuk menukar nilai tiga variabel.

## Guided 

### 1.Array 1

```C++
#include <iostream>
using namespace std;

int main() {
    int nilai[5];

    nilai[0] = 80;
    nilai[1] = 85;
    nilai[2] = 90;
    nilai[3] = 75;
    nilai[4] = 95;

    for (int i = 0; i < 5; i++) {
        cout << "index ke-" << i << " = " << nilai[i] << endl;
    }

    return 0;
}
```
Program ini digunakan untuk menyimpan 5 nilai ke dalam array. Nilai yang dimasukkan yaitu 80, 85, 90, 75, dan 95. Setelah itu, program menampilkan semua nilai tersebut beserta index-nya menggunakan perulangan `for`.


### 2.Array 2

```C++
#include <iostream>
using namespace std;

int main() {
    int nilai[3][3] = {
        {80, 85, 90},
        {75, 80, 85},
        {90, 95, 100}
    };

    cout << nilai[0][0] << endl; // 80
    cout << nilai[1][1] << endl; // 80
    cout << nilai[2][2] << " " ; // 100

    return 0;
}
```
Program ini digunakan untuk menyimpan beberapa nilai dalam array 2 dimensi yang memiliki 3 baris dan 3 kolom. Nilai yang ada di dalam array kemudian dipanggil berdasarkan posisi baris dan kolomnya. Program ini menampilkan nilai 80, 80, dan 100 dari posisi yang sudah ditentukan.


### 3. array 3

```C++
#include <iostream>
using namespace std;

int main() {
    int data[2][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        }
    };

    cout << data[0][1][1] << " "; // 5

    return 0;
}
```
Program ini digunakan untuk menyimpan angka dalam array 3 dimensi. Di dalamnya ada 2 bagian, dan setiap bagian memiliki 3 baris serta 3 kolom. Program mengambil angka berdasarkan posisi yang ditentukan, yaitu `data[0][1][1]`, sehingga angka yang ditampilkan adalah 5.


### 3. array 4

```C++
#include <iostream>
using namespace std;

int main() {
    int data[2][2][2][2] = {
        {
            {
                {1, 2},
                {3, 4}
            },
            {
                {5, 6},
                {7, 8}
            }
        },
        {
            {
                {9, 10},
                {11, 12}
            },
            {
                {13, 14},
                {15, 16}
            }
        }
    };

    cout << data[0][0][0][0] << endl; // 1
    cout << data[1][1][1][1] << endl; // 16

    return 0;
}
```
Program ini digunakan untuk menyimpan angka dalam array 4 dimensi. Array ini berisi beberapa kelompok angka yang disusun dalam beberapa bagian. Program mengambil angka berdasarkan posisi yang sudah ditentukan. Pada kode ini, angka yang ditampilkan adalah 1 dan 16.


### 5. pointer 1

```C++
#include <iostream>
using namespace std;

int main() {
    char a;
    int j;
    char arr[6];

    arr[3] = 'b';
    a = 'u';
    j = 10;

    cout << a << endl;   // u
    cout << &a << endl;  // alamat memory atau address

    cout << j << endl;   // 10
    cout << &j << endl;  // alamat memory atau address

    cout << arr[3] << endl;    // value
    cout << &(arr[4]) << endl; // alamat memory atau address

    return 0;
}
```
Program ini digunakan untuk menyimpan beberapa data, seperti huruf, angka, dan array. Selain menampilkan isi datanya, program juga menunjukkan alamat data tersebut di memori. Huruf u disimpan di variabel a, angka 10 di variabel j, dan huruf b disimpan di arr[3]. Tanda & dipakai untuk melihat alamat data di memori.


### 6. pointer 2

```C++
#include <iostream>
using namespace std;

int main() {
    int x, y;
    int *px;

    x = 87;
    px = &x;
    y = *px;

    cout << "Alamat x= " << &x << endl;
    cout << "Isi px= " << px << endl;
    cout << "Isi X= " << x << endl;
    cout << "Nilai yang ditunjuk px= " << *px << endl;
    cout << "Nilai y= " << y << endl;

    return 0;
}
```
Program ini digunakan untuk mengetahui cara kerja pointer. Nilai x diisi dengan angka 87, kemudian px menyimpan alamat dari x. Nilai dari x juga diambil menggunakan px dan dimasukkan ke y Terakhir, program menampilkan alamat dan nilai dari variabel tersebut.


### 7. pointer 3

```C++
#include <iostream>
#define MAX 5
using namespace std;

int main() {
    int i, j;
    float nilai_total, rata_rata;
    float nilai[MAX];

    static int nilai_tahun[MAX][MAX] = {
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5}
    };

    // inisialisasi array satu dimensi
    for (i = 0; i < MAX; i++) {
        cout << "masukkan nilai ke-" << i + 1 << endl;
        cin >> nilai[i];
    }

    cout << "\ndata nilai siswa :\n";

    // menampilkan array satu dimensi
    for (i = 0; i < MAX; i++) {
        cout << "nilai k-" << i + 1 << "=" << nilai[i] << endl;
    }

    cout << "\nnilai tahunan :\n";

    // menampilkan array dua dimensi
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            cout << nilai_tahun[i][j];
        }
        cout << "\n";
    }

    return 0;
}
```
Program ini digunakan untuk memasukkan 5 nilai siswa dan menampilkan hasilnya. Selain itu, program juga memiliki data nilai tahunan yang disimpan dalam array 2 dimensi. Perulangan for digunakan untuk memasukkan data dan menampilkan semua nilai yang ada.


### 8. pointer 4

```C++
#include <iostream>
using namespace std;

int main() {
    char nama[] = "strukdat";

    cout << nama << endl;
    cout << nama[3] << endl;

    return 0;
}
```
Program ini menyimpan kata `strukdat` ke dalam array karakter. Setelah itu, program menampilkan kata tersebut dan mengambil satu huruf dari posisi index ke-3. Huruf yang ditampilkan dari index tersebut adal




## Unguided 

### 1. 1.	Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3x3 

```C++
#include <iostream>
using namespace std;

int main(){
    int i, j, k;

    int angka1 [3][3] = {
        {48,77,36},
        {23,49,40},
        {17,28,30},
    };

    int angka2 [3][3] = {
        {21,31,37},
        {48,62,18},
        {34,29,87},
    };

    int tambah[3][3];
    int kurang[3][3];
    int kali[3][3];

    // penjumlahan
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            tambah[i][j] = angka1[i][j] + angka2[i][j];
        }
    }

    // pengurangan
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            kurang[i][j] = angka1[i][j] - angka2[i][j];
        }
    }

    // perkalian
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            kali[i][j] = 0;
            for(k = 0; k < 3; k++){
                kali[i][j] = kali[i][j] + angka1[i][k] * angka2[k][j];
            }
        }
    }

    // tampilkan hasil
    cout << "Penjumlahan" << endl;
    cout << tambah[0][0] << " " << tambah[0][1] << " " << tambah[0][2] << endl;
    cout << tambah[1][0] << " " << tambah[1][1] << " " << tambah[1][2] << endl;
    cout << tambah[2][0] << " " << tambah[2][1] << " " << tambah[2][2] << endl;

    cout << endl << "Pengurangan" << endl;
    cout << kurang[0][0] << " " << kurang[0][1] << " " << kurang[0][2] << endl;
    cout << kurang[1][0] << " " << kurang[1][1] << " " << kurang[1][2] << endl;
    cout << kurang[2][0] << " " << kurang[2][1] << " " << kurang[2][2] << endl;

    cout << endl << "Perkalian" << endl;
    cout << kali[0][0] << " " << kali[0][1] << " " << kali[0][2] << endl;
    cout << kali[1][0] << " " << kali[1][1] << " " << kali[1][2] << endl;
    cout << kali[2][0] << " " << kali[2][1] << " " << kali[2][2] << endl;

    return 0;
}
```
### Output Unguided 1 :

##### Output 1

![Output_unguided](https://github.com/daffaarief55-glitch/109082500192_Daffa-Arief-Wicaksono2/blob/main/modul2/output_unguided/output_unguided.png?raw=true)


Program ini berisi dua array yang masing-masing memiliki 3 baris dan 3 kolom. Kedua array tersebut kemudian dihitung dengan operasi penjumlahan, pengurangan, dan perkalian. Hasil dari setiap perhitungan disimpan ke array baru dan ditampilkan ke layar.


### 2. Program ini berisi dua array yang masing-masing memiliki 3 baris dan 3 kolom. Kedua array tersebut kemudian dihitung dengan operasi penjumlahan, pengurangan, dan perkalian. Hasil dari setiap perhitungan disimpan ke array baru dan ditampilkan ke layar.


```C++
#include <iostream>
using namespace std;

void tukarPointer(int *x, int *y, int *z) {
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

void tukarReference(int &x, int &y, int &z) {
    int temp = x;
    x = y;
    y = z;
    z = temp;
}

int main() {
    int a, b, c;

    cout << "nilai a : ";
    cin >> a;

    cout << "nilai b : ";
    cin >> b;

    cout << "nilai c : ";
    cin >> c;

    cout << "\nNilai awal : a = " << a
         << ", b = " << b
         << ", c = " << c << endl;

    tukarPointer(&a, &b, &c);

    cout << "Setelah tukar pointer : a = " << a
         << ", b = " << b
         << ", c = " << c << endl;

    tukarReference(a, b, c);

    cout << "Setelah tukar reference : a = " << a
         << ", b = " << b
         << ", c = " << c << endl;

    return 0;
}
```
### Output Unguided 2 :

##### Output 1
![ Output_Unguided2](https://github.com/daffaarief55-glitch/109082500192_Daffa-Arief-Wicaksono2/blob/main/modul2/output_unguided/outout_unguided2.png?raw=true)

Program ini digunakan untuk mengubah urutan nilai pada variabel a, b, dan c. Nilai ketiga variabel dimasukkan oleh pengguna, lalu ditukar menggunakan pointer dan reference. Setelah proses selesai, program menampilkan nilai sebelum dan sesudah ditukar. Pointer bekerja dengan alamat memori, sedangkan reference


### 3. 3.	Diketahui sebuah array 1 dimensi sebagai berikut :  
arrA = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55} 
Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata – rata dari array tersebut! Gunakan function cariMinimum() untuk mencari nilai minimum dan function cariMaksimum() untuk mencari nilai maksimum, serta gunakan prosedur hitungRataRata() untuk menghitung nilai rata – rata! Buat program menggunakan menu switch-case seperti berikut ini : 
--- Menu Program Array --- 
1.	Tampilkan isi array 
2.	cari nilai maksimum 
3.	cari nilai minimum 
4.	Hitung nilai rata - rata 


```C++
#include <iostream>
using namespace std;

int cariMinimum(int arr[], int jumlah) {
    int minimum = arr[0];

    for (int i = 1; i < jumlah; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    return minimum;
}

int cariMaksimum(int arr[], int jumlah) {
    int maksimum = arr[0];

    for (int i = 1; i < jumlah; i++) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }

    return maksimum;
}

void hitungRataRata(int arr[], int jumlah) {
    int total = 0;

    for (int i = 0; i < jumlah; i++) {
        total = total + arr[i];
    }

    double rataRata = (double) total / jumlah;

    cout << "Nilai rata-rata : " << rataRata << endl;
}

int main() {
    int arrA[10] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};
    int pilihan;

    do {
        cout << "\n--- Menu Program Array ---" << endl;
        cout << "1. Tampilkan isi array" << endl;
        cout << "2. Cari nilai maksimum" << endl;
        cout << "3. Cari nilai minimum" << endl;
        cout << "4. Hitung nilai rata-rata" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Isi array : ";

                for (int i = 0; i < 10; i++) {
                    cout << arrA[i] << " ";
                }

                cout << endl;
                break;

            case 2:
                cout << "Nilai maksimum : "
                     << cariMaksimum(arrA, 10) << endl;
                break;

            case 3:
                cout << "Nilai minimum : "
                     << cariMinimum(arrA, 10) << endl;
                break;

            case 4:
                hitungRataRata(arrA, 10);
                break;

            case 5:
                cout << "Program selesai." << endl;
                break;

            default:
                cout << "Pilihan tidak tersedia!" << endl;
        }

    } while (pilihan != 5);

    return 0;
}
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output_Unguided3](https://github.com/daffaarief55-glitch/109082500192_Daffa-Arief-Wicaksono2/blob/main/modul2/output_unguided/output_unguided3.png?raw=true)


Program ini digunakan untuk mengolah angka yang ada di dalam array. Ada beberapa pilihan yang bisa digunakan, seperti melihat semua angka, mencari angka terbesar dan terkecil, serta menghitung rata-rata. Program akan terus menampilkan menu sampai pengguna memilih pilihan untuk keluar.


## Kesimpulan
Berdasarkan praktikum yang telah dilakukan, dapat disimpulkan bahwa array adalah struktur data yang efisien untuk menyimpan banyak data bertipe sama dan dapat dibuat dalam berbagai dimensi sesuai kebutuhan, mulai dari satu dimensi hingga multidimensi. Array dua dimensi terbukti sesuai untuk pengolahan matriks, seperti operasi penjumlahan, pengurangan, dan perkalian matriks 3x3. Pointer memungkinkan program mengakses data melalui alamat memorinya, dan bersama reference dapat dipakai untuk mengubah nilai variabel asli di dalam fungsi, seperti pada penukaran tiga variabel. Selain itu, penggunaan fungsi, prosedur, dan switch-case membuat program lebih terstruktur, mudah dibaca, dan mudah dikembangkan, seperti pada program menu pengolahan array yang mencari nilai maksimum, minimum, dan rata-rata. Dengan demikian, praktikum ini membantu memahami dasar penyimpanan dan pengelolaan data di memori menggunakan bahasa C++.

## Referensi
[1] Setiyawan, R. D., Hermawan, D., Abdillah, A. F., Mujayanah, A., & Vindua, R. (2024). "Penggunaan Struktur Data Stack dalam Pemrograman C++ dengan Pendekatan Array dan Linked List". JUTECH, 5(2), 484-497. Universitas Pamulang. Diakses melalui https://jurnal.stkippersada.ac.id/jurnal/index.php/jutech/article/download/4263/pdf
<br>[2] Arraffi, A. (2019). "Pointer". OSF Preprints. https://doi.org/10.31219/osf.io/k29rh

