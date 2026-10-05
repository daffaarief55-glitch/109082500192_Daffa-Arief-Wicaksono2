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
