#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Masukkan angka pertama: ";
    cin >> num1;

    cout << "Masukkan angka kedua: ";
    cin >> num2;

    cout << "Hasil penambahan: " << num1 + num2 << endl;
    cout << "Hasil pengurangan: " << num1 - num2 << endl;
    cout << "Hasil perkalian: " << num1 * num2 << endl;

    if (num2 != 0)
        cout << "Hasil pembagian: " << num1 / num2 << endl;
    else
        cout << "Tidak dapat melakukan pembagian dengan nol" << endl;

    return 0;
}
