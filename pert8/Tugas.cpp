#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Deklarasi struktur untuk layanan servis motor
struct Service {
    string name;
    double price;
    int duration; // Durasi pengerjaan dalam jam
};

// Fungsi untuk menampilkan menu
void displayMenu() {
    cout << "=== Aplikasi Layanan Servis Motor ===" << endl;
    cout << "1. Lihat Daftar Layanan Servis" << endl;
    cout << "2. Layanan Saya" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilihan: ";
}

// Fungsi untuk menampilkan menu layanan
void displayServiceMenu() {
    cout << "=== Menu Layanan ===" << endl;
    cout << "1. Ganti Oli" << endl;
    cout << "2. Servis CVT" << endl;
    cout << "3. Servis Bulanan" << endl;
    cout << "4. Kembali ke Menu Utama" << endl;
    cout << "Pilihan: ";
}

// Fungsi untuk menampilkan daftar layanan servis
void displayServices(const vector<Service> &services) {
    cout << "=== Daftar Layanan Servis ===" << endl;
    if (services.empty()) {
        cout << "Tidak ada layanan servis yang tersedia." << endl;
    } else {
        for (size_t i = 0; i < services.size(); ++i) {
            const Service &service = services[i];
            cout << "Nama Layanan: " << service.name << " | ";
            cout << "Harga: Rp " << service.price << " | ";
            cout << "Durasi Pengerjaan: " << service.duration << " jam" << endl;
        }
    }
}

// Fungsi untuk menampilkan layanan servis yang dipilih
void displayMyServices(const vector<Service> &myServices) {
    cout << "=== Layanan Servis Saya ===" << endl;
    if (myServices.empty()) {
        cout << "Anda belum memilih layanan servis apa pun." << endl;
    } else {
        for (size_t i = 0; i < myServices.size(); ++i) {
            const Service &service = myServices[i];
            cout << "Nama Layanan: " << service.name << " | ";
            cout << "Harga: Rp " << service.price << " | ";
            cout << "Durasi Pengerjaan: " << service.duration << " jam" << endl;
        }
    }
}

int main() {
    // Membuat vektor layanan servis dan menambahkan beberapa layanan secara manual
    vector<Service> services;
    services.push_back({"Ganti Oli", 100000, 1});
    services.push_back({"Servis CVT", 150000, 2});
    services.push_back({"Servis Bulanan", 200000, 3});

    vector<Service> myServices;

    int choice;
    do {
        displayMenu();
        cin >> choice;
        cin.ignore(); // Membersihkan buffer input

        switch (choice) {
            case 1:
                displayServiceMenu();
                int serviceChoice;
                cin >> serviceChoice;
                cin.ignore();
                switch (serviceChoice) {
                    case 1:
                        myServices.push_back(services[0]);
                        cout << "Layanan Ganti Oli telah ditambahkan ke Layanan Servis Saya." << endl;
                        break;
                    case 2:
                        myServices.push_back(services[1]);
                        cout << "Layanan Servis CVT telah ditambahkan ke Layanan Servis Saya." << endl;
                        break;
                    case 3:
                        myServices.push_back(services[2]);
                        cout << "Layanan Servis Bulanan telah ditambahkan ke Layanan Servis Saya." << endl;
                        break;
                    case 4:
                        break;
                    default:
                        cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                }
                break;
            case 2:
                displayMyServices(myServices);
                break;
            case 3:
                cout << "Terima kasih telah menggunakan Aplikasi Layanan Servis Motor!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (choice != 3);

    return 0;
}
