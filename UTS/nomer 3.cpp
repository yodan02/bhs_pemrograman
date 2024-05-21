#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int si = 1; si <= n - i; si++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
