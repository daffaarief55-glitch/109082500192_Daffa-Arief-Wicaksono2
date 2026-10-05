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
